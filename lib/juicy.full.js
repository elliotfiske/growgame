'use strict';

function OperateAndFreeThis(fn) { 
   return function() {
      var result = fn.apply(this, arguments);
      this.free();
      return result;
   };
}

function MakeTempOperation(prototype, op) {
   prototype['_' + op] = OperateAndFreeThis(prototype[op]);
}

/*
 * NOTE: Only works with HTML5 Canvas
 * (Like you use anything else anyway...)
 */
(function(window, document) {
   /* -------------------- Animation frames ----------------- */
   var requestAnimationFrame = (function() {
      return window.requestAnimationFrame ||
         window.webkitRequestAnimationFrame ||  
         window.mozRequestAnimationFrame    ||
         function(callback) {
            window.setTimeout(callback, 1000 / 60);
         };
      })();

   /* Base object */
   var Juicy = window.Juicy = {};

   /* --------------------- Extension stuff ----------------- */
   /* Credit to Underscore.js */
   var combine = function(obj) {
      for (var index = 1; index < arguments.length; index++) {
         var source = arguments[index];
         for (var key in source) {
            obj[key] = source[key];
         }
      }
   };

   /* Credit to Backbone.js */
   var extend = function(protoProps, staticProps) {
      var parent  = this;
      var child;

      if (protoProps.constructor !== protoProps.__proto__.constructor)
         child = protoProps.constructor;
      else
         child = function() { return parent.apply(this, arguments); };

      combine(child, parent, staticProps || {});

      var Surrogate = function(){ this.constructor = child; };
      Surrogate.prototype = parent.prototype;
      child.prototype = new Surrogate;

      if (protoProps)
         combine(child.prototype, protoProps);

      child.prototype.__super__ = parent.prototype;

      return child;
   };

   /* ---------------------- Utility ------------------------ */
   var _pool_Point = [];
   var TEMP = Juicy.TEMP = 'temporary';

   var Point = Juicy.Point = function(x, y, temporary) {
      this.x = x = x || 0;
      this.y = y || (y === 0 ? 0 : x);
      this.freed = !!temporary;
      if (temporary) {
         _pool_Point.push(this);
      }
   };

   Point.create = function(x, y, temporary) {
      if (_pool_Point.length > 0) {
         var point = _pool_Point[0];
         if (!temporary) {
            _pool_Point.shift();
         }

         point.x = x;
         point.y = y;

         return point;
      }
      else {
         return new Point(x, y, temporary);
      }
   };

   Point.temp = function(x, y) { return Point.create(x, y, TEMP); };

   Point.prototype.free = function() {
      if (this.freed) throw 'Point already freed';
      this.freed = false;
      _pool_Point.push(this);
      return this; // Enable ...chaining...
   }

   Point.prototype.equal = function(other) {
      return this.x === other.x && this.y === other.y;
   };

   Point.prototype.add = function(other, y) {
      if (typeof(y) !== 'undefined') {
         other = Point.temp(other, y);
      }
      return Point.create(this.x + other.x, this.y + other.y);
   };

   Point.prototype.mult = function(other) {
      return Point.create(this.x * (other.x || other), this.y * (other.y || other));
   };

   Point.prototype.sub = function(other) {
      return this.add(other.mult(-1, TEMP));
   };

   Point.prototype.length = function(other) {
      return Math.sqrt(this.x * this.x + this.y * this.y);
   };

   Point.prototype._ = Point.prototype.free;
   MakeTempOperation(Point.prototype, 'add');
   MakeTempOperation(Point.prototype, 'sub');
   MakeTempOperation(Point.prototype, 'mult');
   MakeTempOperation(Point.prototype, 'equal');
   MakeTempOperation(Point.prototype, 'length');

   /* ----------------------- Sounds ------------------------ */
   var AudioManager = Juicy.AudioManager = function() {
      this.sounds = {};
      this.volume = 0.4;

      this.muted = false;
   };

   var load = AudioManager.prototype.load = function(name, src, loop) {
      if (!src) {
         src = name;
      }

      var sound = document.createElement('audio');
      var sourceOGG = document.createElement("source");
      var sourceMP3 = document.createElement("source");

      sourceOGG.src = src+".ogg";
      sourceMP3.src = src+".mp3";

      sound.appendChild(sourceOGG);
      sound.appendChild(sourceMP3);
      
      sound.volume = this.volume;
      if (loop) {
         sound.loop = 'loop';
      }

      this.sounds[name] = sound;
   };

   AudioManager.prototype.play = function(name) {
      if (this.sounds[name]) {
         this.sounds[name].play();
      }
   }

   AudioManager.prototype.pause = function(name) {
      if (this.sounds[name]) {
         this.sounds[name].pause();
      }
   }

   AudioManager.prototype.stop = function(name) {
      if (this.sounds[name]) {
         this.sounds[name].pause();
         this.sounds[name].currentTime = 0;
      }
   }

   AudioManager.prototype.setVolume = function(newVol) {
      this.volume = newVol;

      for (var key in this.sounds) {
         this.sounds[key].volume = newVol;
      }
   };

   AudioManager.prototype.mute = function() {
      this.muted = this.volume; // Save for unmuting
      this.setVolume(0);
   };

   AudioManager.prototype.unmute = function() {
      console.log(this.muted);
      this.setVolume(this.muted); // Saved
   };

   AudioManager.extend = extend;

   var Music = Juicy.Music = AudioManager.extend({
      load: function(name, src) {
         AudioManager.prototype.load.call(this, name, src, true); // loop it
      }
   });

   var SFX = Juicy.SFX = AudioManager.extend({
      play: function(name) {
         if (this.sounds[name]) {
            this.sounds[name].pause();
            this.sounds[name].currentTime = 0;
            this.sounds[name].play();
         }
      }
   });

   /* -------------------- Game Handler --------------------- */
   /* 
    * init(canvas, width, height) - Construct new game
    *  [Helper]
    *    getCoords(event)         - Compute relative location
    *    update   ()              - Update game logic
    *    render   ()              - Render game objects
    *  [Constructor]
    *    setCanvas(canvas)        - Set HTML canvas element
    *    setInput (input_handler) - Set input manager
    *  [Useful]
    *    setState (state)         - Set running game state
    *    resize   ()              - Automatically resize canvas
    *    run      ()              - Begin game running
    */
   var Game = Juicy.Game = {};
   var Game_scale = new Point(1);
   var Game_mouse = new Point();
   var Game_running  = false;
   var Game_state    = false;
   var Game_canvas   = false;
   var Game_context  = false;
   var Game_lastTime = false;

   // Set up document-wide input for game
   var keyState = {};
   var KEYS     = {};
   var CODES    = {};
   var listener = {};
   document.onkeydown = function(evt) {
      keyState[evt.keyCode] = true;
   };
   document.onkeyup = function(evt) {
      keyState[evt.keyCode] = false;

      var method = 'key_' + CODES[evt.keyCode];
      if (Game_state && Game_state[method])
         Game_state[method](CODES[evt.keyCode]);
   };

   Game.init = function(canvas, width, height, keys) {
      Game_running = false;
      Game.width   = width;
      Game.height  = height;
      Game.setCanvas(canvas);

      // Input stuff
      KEYS     = keys || {};
      CODES    = {};
      for (var key in keys) {
         CODES[keys[key]] = key;
      }

      return this; // Enable chaining
   };

   Game.keyDown = function(key) {
      if (typeof(key) === 'string')
         return keyState[KEYS[key]];
      else {
         for (var k = 0; k < key.length; k ++) {
            if (Game.keyDown(key[k]))
               return true;
         }

         return false;
      }
   };

   Game.on = function(action, keys, callback) {
      if (action === 'key') {
         if (typeof(keys) !== 'object')
            keys = [keys];

         for (var i = 0; i < keys.length; i ++) {
            var key = keys[i];

            Game_state['key_' + key] = callback;
         }
      }
      else {
         if (listener[action]) {
            document.removeEventListener(action, listener[action]);
         }

         document.addEventListener(action, listener[action] = keys);
      }

      return this; // Enable chaining
   };

   Game.off = function(keys) {
      if (typeof(keys) !== 'object')
         keys = [keys];

      for (var i = 0; i < keys.length; i ++) {
         var key = keys[i];

         delete Game_state['key_' + key];
      }
   }

   var Game_clear = function() {
      for (var action in listener) {
         document.removeEventListener(action, listener[action]);
      }
      listener = {};
   };

   Game.getCanvasCoords = function(evt) {
      var canvasRect = Game_canvas.getBoundingClientRect();
      var mx = evt.clientX - canvasRect.left;
      var my = evt.clientY - canvasRect.top;

      return new Point(Math.floor(mx * Game.width /  Game_canvas.width), Math.floor(my * Game.height / Game_canvas.height));
   };

   Game.setCanvas = function(canvas) {
      Game_canvas  = canvas;
      Game_context = canvas.getContext('2d');
      
      Game_context.mozImageSmoothingEnabled = false;
      Game_context.imageSmoothingEnabled = false;

      var startDrag = false;
      canvas.onmousedown = function(evt) {
         startDrag = evt;
         Game.trigger('dragstart', evt);
      };
      canvas.onmouseup = function(evt) {
         var startPos = Game.getCanvasCoords(startDrag);
         var endPos   = Game.getCanvasCoords(evt);

         if (startPos.sub(endPos).length() <= 2) {
            Game.trigger('click', evt);
         }
         else {
            Game.trigger('dragend', evt);
         }

         startDrag = false;
      };
      canvas.onmousemove = function(evt) {
         Game_mouse = Game.getCanvasCoords(evt);

         if (startDrag) {
            Game.trigger('drag', evt);
         }
      }

      Game.resize();
      return this; // Enable chaining
   };

   Game.resize = function() {
      var parent = Game_canvas.parentElement;
      var width  = parent.width  || parent.clientWidth;
      var height = parent.height || parent.clientHeight;

      if (!Game_canvas.attributes.fixed) {
         Game_canvas.width  = width;
         Game_canvas.height = width * Game.height / Game.width;
         if (Game_canvas.height > height) {
            Game_canvas.height = height;
            Game_canvas.width = height * Game.width / Game.height;
         }
      }
      Game_scale = new Point(Game_canvas.width  / Game.width, Game_canvas.height / Game.height);

      // Make sure we re-render
      if (Game_state)
         Game_state.__hasRendered = false;
      
      return this; // Enable chaining
   };

   var Game_nextState = false;
   Game.setState = function(nextState) {
      Game_nextState = nextState;

      return this; // Enable chaining
   };

   var Game_checkState = function() {
      while (Game_nextState) {
         Game_clear();

         if (Game_state && Game_state.complete) {
            Game_state.cleanup();
         }


         Game_state = Game_nextState;
         Game_nextState = false;

         Game_state.game = Game;
         Game_state.init();
         Game_state.__hasRendered = false;
      }
   };

   Game.trigger = function(evt, pos) {
      if (Game_state && Game_state[evt] && !Game_state.complete)
         Game_state[evt](Game.getCanvasCoords(pos));
   };

   window.computeFPS = function() {
      var tot = 0;
      for (var i in sec_per_frame)
         tot += sec_per_frame[i];

      console.log('FPS:', Math.min(sec_per_frame.length / tot, 60));
   }

   window.sec_per_frame = new Array(20);
   Game.update = function() {
      if (!Game_running)
         return;

      requestAnimationFrame(Game.update);
      var nextTime = new Date().getTime();
      var dt = (nextTime - Game_lastTime) / 1000;
      if (dt > 0.05) {
         // console.log(dt);
         Game_lastTime = nextTime;
         return;
      }

//       try {
         Game_checkState();

         var updated = !Game_state.update(dt, Game) || Game_state.updated;
         Game_state.updated = false;
         
         Game_lastTime = nextTime;

         if (updated || !Game_state.__hasRendered) {
            Game.render();
            Game_state.__hasRendered = true;
         }

         sec_per_frame.shift();
         sec_per_frame.push((new Date().getTime() - nextTime) / 1000);
         // window.computeFPS();
         if (window.stats) {
            window.stats.update();
         }
//       }
//       catch (e) {
//          console.error(e);
//          Game.pause();
//       }
   };

   Game.render = function() {
      Game_context.save();

      Game_context.scale(Game_scale.x, Game_scale.y);
      if (!Game_state.stopClear)
         Game_context.clearRect(0, 0, Game.width, Game.height);

      Game_state.render(Game_context);

      Game_context.restore();

      return this; // Enable chaining
   };

   Game.run = function() {
      Game_running = true;
      Game_lastTime = new Date().getTime();

      Game.update();

      return this; // Enable chaining
   };

   Game.pause = function() {
      Game_running = false;
   };

   /* -------------------- Game State ----------------------- */
   /* 
    * new State() - Construct new state
    *  [Constructor]
    *    init   ()          - Run every time the state is swapped to.
    *  [Useful]
    *    click  (evt)       - When the user clicks the state
    *    update (dt, input) - Run before rendering. Use for logic.
    *                         IMPORTANT: return true if you don't want to re-render
    *    render (context)   - Run after  update.    Use for graphics
    */
   var State = Juicy.State = function() {/* Ghost to avoid getting noopped */};
   State.prototype.init    = // function() {}
   State.prototype.update  = // function() {}
   State.prototype.render  = // function() {};
   State.prototype.cleanup = function() {};

   /* -------------------- Game Entity ----------------------- */
   /* 
    * new Entity(components) - Construct new entity
    *  [Static Properties]
    *    components       - Array of component constructors
    *  [Constructor]
    *    addComponent (c[, name]) - Add a component to the entity
    *  [Useful]
    *    getComponent (c) - Get an (updated) component.
    *    update (dt, c)   - Calls update on all components, or just c
    *    render (context) - Calls render on all components
    */
   var untitledComponents = 0;
   var Entity = Juicy.Entity = function(state, components) {
      // Extra catch
      if (typeof(components) === 'string')
         components = [components];

      this.components = {};
      this.updated    = {};
      this.state      = state;
      this.children   = [];

      components = components || this.__proto__.components;
         
      // Transform component
      this.position = new Point();
      this.scale    = new Point(1);
      this.width = this.height = 0;

      for (var i = 0; i < components.length; i ++) {
         this.addComponent(components[i]);
      }

      if (this.init)
         this.init();
   };
   Entity.prototype.components = [];
   Entity.prototype.addComponent = function(c, name) {
      if (typeof(c) === 'function')
         c = new c(this);
      else if (typeof(c) === 'string') {
         if (Juicy.Components[c])
            c = new Juicy.Components[c](this);
         else
            throw 'Component ' + c + ' does not exist';
      }

      if (!c.__proto__.name) {
         c.__proto__.name = '_component_' + untitledComponents.toString();
         untitledComponents ++;
      }

      var name = name || c.__proto__.name;
      if (this.components[name])
         throw 'Component ' + name + ' already exists';
      else {
         c.entity = this;
         this.components[name] = c;
      }
   };
   Entity.prototype.getComponent = function(name) {
      return this.components[name];
   };
   Entity.prototype.update = function(dt, name) {
      if (name) {
         if (this.components[name] && this.updated[name] !== dt) {
            this.updated[name] = dt;
            this.components[name].update(dt, this.state.game);
            return this.components[name];
         }
      }
      else { // Update all
         this.updated = {};
         for(var key in this.components) {
            if (this.updated[key] !== dt) {
               this.update(dt, key);
            }
         }
      }
   };
   /**
    * Visual Transform canvas madness
    */
   Entity.prototype.visualCanvasTransform = function(context) {
      var scaleAnchorAdjustX = this.width * this.visualTransform.scaleAnchor.x;
      var scaleAnchorAdjustY = this.height * this.visualTransform.scaleAnchor.y;

      context.translate(scaleAnchorAdjustX, scaleAnchorAdjustY);
      context.scale(this.visualTransform.scale.x, this.scale.y);
      context.translate(-scaleAnchorAdjustX, -scaleAnchorAdjustY);

      var rotateAnchorAdjustX = this.width * this.visualTransform.rotateAnchor.x;
      var rotateAnchorAdjustY = this.height * this.visualTransform.rotateAnchor.y;

      context.translate(rotateAnchorAdjustX, rotateAnchorAdjustY);
      context.rotate(this.visualTransform.rotate);
      context.translate(-rotateAnchorAdjustX, -rotateAnchorAdjustY);

      context.translate(this.visualTransform.translate.x, this.visualTransform.translate.y);
   };

   Entity.prototype.render = function(context) {
      context.save();
      var pos = this.position.floor().free();

      context.translate(pos.x, pos.y);
      context.scale(this.scale.x, this.scale.y);

      if (this.visualTransform) {
      context.save();
         this.visualCanvasTransform(context);
         
         context.mozImageSmoothingEnabled = false;
         context.imageSmoothingEnabled = false;
      }

      arguments[1] = arguments[1] || 0;
      arguments[2] = arguments[2] || 0;
      arguments[3] = arguments[3] || this.width;
      arguments[4] = arguments[4] || this.height;

      for(var key in this.components) {
         this.components[key].render.apply(this.components[key], arguments);
      }

      if (this.children.length > 0) {
         for(var i = 0; i < this.children.length; i ++) {
            this.children[i].render(context);
         }
      }

      if (this.visualTransform) {
      context.restore(); }
      context.restore();
   };
   Entity.prototype.addChild = function(child) {
      child.parent = this;
      this.children.push(child);
   };
   Entity.prototype.globalPosition = function() {
      var position = this.position;
      var parent;
      if (parent = this.parent)
         return parent.globalPosition().add(this.position.mult(parent.globalScale()));
      else
         return position;
   };
   Entity.prototype.globalScale = function() {
      var scale = this.scale;
      if (this.parent)
         return this.scale.mult(this.parent.globalScale());
      else
         return scale;
   };

   /* -------------------- Game Component -------------------- */
   /* 
    * new Component(entity) - Construct new component on an entity
    *  [Static Properties]
    *    name             - Name of the component
    *  [Useful]
    *    update (dt)      - Update component (if applicable)
    *    render (context) - Render component (if applicable)
    * 
    * Component.create(name, prototype, static[, force]) 
    *    - Extend and register by name. Force to override another component
    */
   var Component = Juicy.Component = function() {/* Ghost to avoid getting noopped */};
   Component.prototype.name   = 0;
   Component.prototype.update = // function() {}
   Component.prototype.render = function() {};

   // Map of names to components
   Juicy.Components = {};
   Component.create = function(name, protoProps, staticProps) {
      protoProps.name = protoProps.name || name;

      return Juicy.Components[name] = this.extend(protoProps, staticProps)
   };

   State.extend = Entity.extend = Component.extend = extend;

   /* -------------------- Typical Components --------------- */
   Component.create('Image', {
      constructor: function(entity) {
         var self = this;

         this._tint = false;
         this.opacity = 1;

         this.image = new Image();
         this.image.onload = function() {
            if (!entity.width && !entity.height) {
               entity.width  = this.width;
               entity.height = this.height;
            }

            if (self._tint) {
               self.setTint(self._tint);
            }

            if (self.onload) {
               self.onload(this);
            }

            entity.state.updated = true;
         }
         this.image.onerror = function() {
            self.image = new Image();
         }

         entity.setImage = this.setImage.bind(this);
      },
      setTint: function(tint) {
         // TODO glean alpha of tint
         this._tint = tint;

         if (this.image.complete) {
            // Apply tint
            var canvas = this.canvas = this.canvas || document.createElement('canvas');

            canvas.width = this.image.width;
            canvas.height = this.image.height;

            var context = canvas.getContext('2d');

            context.fillStyle = this._tint;
            context.fillRect(0, 0, canvas.width, canvas.height);

            // destination atop makes a result with an alpha channel identical to fg,
            // but with all pixels retaining their original color *as far as I can tell*
            context.globalCompositeOperation = "destination-atop";
            context.globalAlpha = 0.75;
            context.drawImage(this.image, 0, 0);
            context.globalAlpha = 1;
         }

         return this; // Enable chaining
      },
      setImage: function(url) {
         this.image.src = url;

         return this; // Enable chaining
      },
      render: function(context) {
         var originalAlpha = context.globalAlpha;
         var args          = arguments;

         context.globalAlpha = this.opacity;
         args[0] = this.image;
         context.drawImage.apply(context, args);

         if (this._tint) {
            args[0] = this.canvas;
            context.drawImage.apply(context, args);
         }

         // Restore original global alpha
         context.globalAlpha = originalAlpha;
      }
   });

   Component.create('Box', {
      constructor: function() {
         this.fillStyle = 'white';
      },
      render: function(context, x, y, w, h) {
         context.fillStyle = this.fillStyle;
         context.fillRect(x, y, w, h);
      }
   });

   Component.create('Text', {
      constructor: function() {
         this.canvas = document.createElement('canvas');
         this.context = this.canvas.getContext('2d');

         // Text info
         var info = this.text = {};

         info.font = '32px Arial';
         info.text = '';
         info.fillStyle = 'white';
         
         // For accessing outside of this component
         this.opacity = 1;
      },
      set: function(config) {
         var info    = this.text;
         var entity  = this.entity;
         var context = this.context;
         var canvas  = this.canvas;

         // Set attributes
         info.font = config.font           || info.font;
         info.text = config.text           || info.text;
         info.fillStyle = config.fillStyle || info.fillStyle;

         // Measure the text size
         context.font      = info.font;
         context.fillStyle = info.fillStyle;
         var size = context.measureText(info.text);

         // Resize canvas
         entity.width  = canvas.width = Math.ceil(size.width);
         entity.height = canvas.height = Math.ceil(parseInt(info.font) * 5 / 3);

         // Draw text
         context.textBaseline = 'top';
         context.font        = info.font;
         context.fillStyle   = info.fillStyle;
         context.fillText(info.text, 0, 0);
      },
      render: function(context) {
         // Save original alpha
         var originalAlpha = context.globalAlpha;
         context.globalAlpha = this.opacity;

         arguments[0] = this.canvas;
         context.drawImage.apply(context, arguments);

         context.globalAlpha = originalAlpha;
      }
   });

})(window, document);
(function(Juicy, Entity) {
   /* -------------------- Helper functions ----------------- */
   /*
    * Juicy.rand([min, ] max) - Return a random int between [min, max)
    */
   Juicy.rand = function(min, max) {
      if (max)
         return Math.floor(Math.random() * (max - min)) + min;
      else
         return Math.floor(Math.random() * min);
   };

   Juicy.PI = Math.PI;

   /* ----------------- Point helper function ---------------- */
   Juicy.Point.prototype.rotate = function(angle) {
      var sin = Math.sin(angle);
      var cos = Math.cos(angle);

      return Juicy.Point.create(cos * this.x - sin * this.y,
                                sin * this.x + cos * this.y);
   };

   Juicy.Point.prototype.distance = function(other) {
      return this.sub(other)._length();
   };

   Juicy.Point.prototype.floor = function() {
      return Juicy.Point.create(Math.floor(this.x), Math.floor(this.y));
   };

   Juicy.Point.prototype.clone = function() {
      return Juicy.Point.create(this.x, this.y);
   };

   MakeTempOperation(Juicy.Point.prototype, 'floor');
   MakeTempOperation(Juicy.Point.prototype, 'rotate');

   /* ----------------- Entity helper functions -------------- */
   Entity.prototype.center = function() {
      return this.position.add(this.width / 2, this.height / 2);
   };

   Entity.prototype.contains = function(point) {
      point = point.sub(this.position);
      return point.x >= 0          && point.y >= 0 && 
             point.x <= this.width && point.y <= this.height;
   };

   Entity.prototype.distance = function(other) {
      if (!other.x)
         other = other.center(); // Make sure it's a Point

      return this.center().distance(other);
   };

   Entity.prototype.testCollision = function(other) {
      return this.center().distance(other.center()) < Math.min(this.width, this.height);// / 2;

      var otherBottomRight = other.position.add(new Juicy.Point(other.width, other.height));
      var bottomRight      = this .position.add(new Juicy.Point(this .width, this .height));

      return otherBottomRight.x >= this.position.x &&
             otherBottomRight.y >= this.position.y &&
             other.position.x   <= bottomRight.x   &&
             other.position.y   <= bottomRight.y;
   };
})(window.Juicy, Juicy.Entity);
