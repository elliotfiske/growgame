var Level = Juicy.State.extend({
   tilesize: 20,
   constructor: function(player, levelNum) {
      this.levelNum = levelNum || 1;
      this.maxLevels = 11;
      this.gui = new Juicy.Entity(this, ['GUI', 'Animations']);
      if (player) {
         this.player = player;

         this.player.scene = this;
         this.player.getComponent('Score').setGui(this.gui.getComponent('GUI'));
         this.gui.getComponent('GUI').updateScore(this.player.getComponent('Score').score);
      }
      else {
         this.player = new Juicy.Entity(this, ['Sprite', 'Player', 'Physics', 'Animations', 'Score', 'Upgrades']);

         this.player.getComponent('Score').setGui(this.gui.getComponent('GUI'));
         this.player.getComponent('Score').setName(name);
         this.player.transform.width = 1.4;
         this.player.transform.height = 1.8;
      }

      var name = window.name; // set the name from a textbox before the game or some shiiiii

      this.player.getComponent('Sprite').setSheet('./art/wizz-sheet.png', 21 * 3, 31 * 3);
      this.player.getComponent('Sprite').scale = 1.5;
      this.player.getComponent('Sprite').last_sprite = 3;
      this.player.getComponent('Sprite').repeat = true;
      

      this.objects = [];
      this.enemies = [];

      this.particles = new Juicy.Entity(this, ['ParticleManager']);

      // Positive = move down or right
      this.camera = {
         x: this.player.transform.position.x,
         y: this.player.transform.position.y,
         give_x: 4,
         give_y: 0,
         dx: 0,
         dy: 0
      }

      this.tileManager = new Juicy.Entity(this, ['LevelTiles']);
      this.levelTiles = this.tileManager.getComponent('LevelTiles');
      this.levelTiles.build(1+this.levelNum, this.levelNum);

      var songs = [newBuzzSound("audio/music_footnote",{formats: [ "mp3"]}),
                   newBuzzSound( "audio/music_burning_books",{formats: [ "mp3"]}),
                   newBuzzSound( "audio/music_quickdraw",{formats: [ "mp3"]})];

      this.shrineDeathSound = newBuzzSound( "audio/fx_explode", {
         formats: [ "wav"]
      });

      this.music = songs[Juicy.rand(3)];

      // Screen Shaking
      this._shake = {
         strength: 0,
         time: 0
      };

      // Transition out of level
      this.flash = false;

      var self = this;

      // Create enemies
      for (var i = 0; i < this.levelTiles.spawns.length; i ++) {
         var spawn = this.levelTiles.spawns[i];

         if (spawn.type === 'enemy') {
            var enemy = new Juicy.Entity(this, ['Sprite', 'Enemy', 'PatrollingPhysics', 'Animations']);


            enemy.getComponent('Sprite').setSheet('./art/enemy-sheet.png', 15, 20);
            enemy.getComponent('Sprite').scale = 1;
            enemy.getComponent('Sprite').last_sprite = 3;
            enemy.getComponent('Sprite').repeat = true;
            enemy.getComponent('Sprite').runAnimation(0,3,0.25,true);

      

            enemy.transform.width = 1.4;
            enemy.transform.position.y = spawn.y;
            enemy.transform.position.x = spawn.x;
            enemy.transform.height = 1.8;
            // Enemy health and speed based on level
            enemy.getComponent('Enemy').health += (25 * this.levelNum);
            enemy.getComponent('Enemy').speed += this.levelNum;

            if (Juicy.rand(2) === 1) {
               enemy.getComponent('Enemy').direction = 1;
            }
            else {
               enemy.getComponent('Enemy').direction = -1;
            }

            this.enemies.push(enemy);
         }
         else if (spawn.type === 'book') {
            var book = new Juicy.Entity(this, ['Image']);
            book.getComponent('Image').setImage('./img/deck.png');
            book.transform.width = 0.75;
            book.transform.height = 1;
            book.transform.position.y = spawn.y;
            book.transform.position.x = spawn.x;

            var power = new Juicy.Components.Powerup(this.player.getComponent('Upgrades').availableBooks());
            book.getComponent('Image').setTint(Powerup.getColor([power.power]));
            book.addComponent(power);

            this.objects.push(book);
         }
         else if (spawn.type === 'heart') {
            var heart = new Juicy.Entity(this, ['Image', 'Heart']);
            heart.getComponent('Image').setImage('./img/heart.png');
            heart.transform.width = 0.75;
            heart.transform.height = 1;
            heart.transform.position.y = spawn.y;
            heart.transform.position.x = spawn.x;

            this.objects.push(heart);
         }
         else if (spawn.type === 'player') {
            this.player.transform.position.x = spawn.x;
            this.player.transform.position.y = spawn.y;
         }
         else if (spawn.type === 'shrine') {
            var shrine = new Juicy.Entity(this, ['Sprite', 'Animations']);
            shrine.getComponent('Sprite').setSheet('./img/shrine.png', 256, 512);
            shrine.transform.width = 3;
            shrine.transform.height = 6;
            shrine.transform.position.y = spawn.y - 1.85;
            shrine.transform.position.x = spawn.x - 1;

            var destructible = new Juicy.Components.Destructible(1000);
            destructible.ondestroy = function() {
               buzz.all().stop();
               self.shrineDeathSound.play();
               self.slow = true;
               self.flash = 1;
               shrine.getComponent('Sprite').runAnimation(1, 3, 0.5)
                  .oncompleteanimation = function() {};
               self.player.getComponent('Score').eventOccurred('destroyShrine');

               self.player.scene.particles.getComponent('ParticleManager').spawnParticles("100, 200, 200, ", 1.3,  800, function(particle, ndx) {
                   if (ndx > 1) {
                       return ndx - 1;
                   }
                   else {
                       return 0;
                   }
               },
               function(particle) {
                   particle.x = shrine.transform.position.x + shrine.transform.width/2 + Math.random()*2-1.3;// + shrine.width/2 * (Math.random() * 2);
                   particle.y = shrine.transform.position.y + 0.4 + Math.random();// + shrine.transform.height + 0.7;
                   particle.dx = Math.random() * 16 - 8;
                   particle.dy = -27 + Math.random()*5;
                   particle.startLife = 100;
                   particle.life = particle.startLife;
                }, function(particle) {
                   particle.x += particle.dx * 0.03;
                   particle.y += particle.dy * 0.03;
                   particle.dy += 0.9;

                   particle.image = Math.floor(Math.random() * 255.0)+ ", " + Math.floor(Math.random() * 255.0) + ", " + Math.floor(Math.random() * 255.0) + ", ";

                   if (particle.life > particle.startLife) {
                       particle.alpha = 1;
                   }
                   else {
                       particle.alpha = particle.life / particle.startLife;
                   }
                });
               
            }
            shrine.addComponent(destructible);

            this.objects.push(shrine);
         }
         else {
            console.warn(spawn);
         }
      }
   },
   init: function() {
      var self = this;
      this.game.input.on('key', 'ESC', function() {
         self.game.setState(new Pause(self));
      });
      this.music.play().loop();

      this.player.getComponent('Player').updateGUI();
   },
   shake: function(time, strength) {
      this._shake = {
         strength: strength || 5,
         time: time || 0.3
      };
   },
   addObject: function(obj) {
      this.objects.push(obj);
   },
   update: function(dt, input) {
      if (!this.levelTiles.imagesLoaded()) {
         return;
      }
      if (this.slow)
         dt /= 3;

      if (this._shake && this._shake.time > 0) {
         this.game.canvas.style.left = (this._shake.strength * Math.sin(this._shake.time * 64)) + 'px';

         this._shake.time -= dt;

         if (this._shake.time <= 0) {
            this.game.canvas.style.left = '0px';
         }
      }

      if (this.flash !== false) {
         if (this.flash > -1.5 && this.flash - dt <= -1.5) {
            // If on level 10, end game
            if (this.levelNum === this.maxLevels) {
               this.game.setState(new GameOverScreen(this.player));
            }
            else {
               TransitionManager.toShop();

               this.game.setCanvas(ShopCanvas);
               this.game.setState(new UpgradeScreen(this.player, this.levelNum));
               this.game.pause();
               ga('send', 'pageview', 'upgradescreen', 'Upgrade Screen');

               var self = this;
               TransitionManager.onComplete = function() {
                  self.game.run();
               }
            }
         }

         this.flash -= dt;
      }

      this.player.update(dt);
      if (this.player.dead) {
         this.game.setState(new GameOverScreen(this.player));
         
      ga('send', 'pageview', 'gameoverscreen', 'Game Over Screen');
      }
      this.particles.update(dt);

      var player_input = this.player.getComponent('Player');

      var screen_w = GAME_WIDTH / this.tilesize;
      var screen_h = GAME_HEIGHT / this.tilesize;
      var dx = (this.player.transform.position.x + player_input.direction * this.camera.give_x - screen_w / 2) - this.camera.x;
      var dy = (this.player.transform.position.y - screen_h / 2) - this.camera.y;

      this.camera.x += dx * 4 * dt;
      this.camera.y += dy * 4 * dt;
      if (this.camera.x < 0) 
         this.camera.dx = this.camera.x = 0;
      if (this.camera.x * this.tilesize + GAME_WIDTH > this.levelTiles.width * this.tilesize) {
         this.camera.dx = 0;
         this.camera.x = this.levelTiles.width - GAME_WIDTH / this.tilesize;
      }
      if (this.camera.y < 0)
         this.camera.dy = this.camera.y = 0;
      if (this.camera.y * this.tilesize + GAME_HEIGHT > this.levelTiles.height * this.tilesize) {
         this.camera.dy = 0;
         this.camera.y = this.levelTiles.height - GAME_HEIGHT / this.tilesize;
      }

      for (var i = 0; i < this.objects.length; i ++) {
         this.objects[i].update(dt);
         if (this.objects[i].dead) {
            this.objects.splice(i, 1);
            i --;
         }
      }

      for (var i = 0; i < this.enemies.length; i ++) {
         this.enemies[i].update(dt);
         if (this.enemies[i].dead) {
            this.enemies.splice(i, 1);
            i --;
         }
      }

      this.spawnCooldown -= dt;
      if (this.spawnCooldown <= 0) {
         this.spawnCooldown = this.spawnTime;

         var enemy = new Juicy.Entity(this, ['Box', 'Enemy', 'PatrollingPhysics', 'Animations']);
         enemy.getComponent('Box').fillStyle = 'red';
         enemy.transform.width = 1.4;
         enemy.transform.position.y = 10;
         enemy.transform.position.x = 30;
         enemy.transform.height = 1.8;
         if (Juicy.rand(2) === 1) {
            enemy.getComponent('Enemy').direction = 1;
         }
         else {
            enemy.getComponent('Enemy').direction = -1;
         }
         this.enemies.push(enemy);
      }

      return this.paused;
   },
   render: function(context) {
      if (!this.levelTiles.imagesLoaded()) {
         return;
      }
      context.save();
      var sc = this.tilesize;
      context.scale(sc, sc);
      context.translate(-this.camera.x, -this.camera.y);

      var bounds = {
         position: {
            x: this.camera.x,
            y: this.camera.y
         },
         width: GAME_WIDTH / this.tilesize,
         height: GAME_HEIGHT / this.tilesize
      };

      this.tileManager.render(context, bounds.position.x, bounds.position.y, bounds.width, bounds.height);

      for (var i = 0; i < this.objects.length; i ++) {
         if (this.objects[i].transform.testCollision(bounds)) {
            this.objects[i].render(context);
         }
      }

      for (var i = 0; i < this.enemies.length; i ++) {
         if (this.enemies[i].transform.testCollision(bounds)) {
            this.enemies[i].render(context);
         }
      }

      if (!this.player.getComponent('Player').hide) {
         this.player.render(context);
      }

      this.particles.render(context);

      context.restore();
      
      this.gui.render(context);
      
      if (this.flash !== false) {
         if (this.flash > 0) {
            context.fillStyle = 'rgba(255, 255, 255, ' + this.flash + ')';
            context.fillRect(0, 0, GAME_WIDTH, GAME_HEIGHT);
         }
         else {
            context.fillStyle = 'rgba(0, 0, 0, ' + (-0.5 * this.flash) + ')';
            context.fillRect(0, 0, GAME_WIDTH, GAME_HEIGHT);
         }
      }
   }
});
