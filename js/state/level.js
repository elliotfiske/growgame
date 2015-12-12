(function() {
    var player = new Juicy.Entity(this, ['Sprite', 'Player', 'Physics', 'Animations']);
        player.getComponent('Player').updateAnim('IDLE');

    window.Level = Juicy.State.extend({
        constructor: function(options) {
            options = options || {};

            if (typeof(options.countdown) === 'undefined') {
                options.countdown = options.countdown || 3;
            }

            // Initialize variables
            var self = this;
            this.game_width = (options.width || 4) * 80; // tiles per chunk
            this.game_height = (options.height || 30) + 1;
            this.dramaticPauseTime = 0.0;
            this.shake = 0;
            this.song = options.song || ('lvl' + (Juicy.rand(2) + 1));

            // State variables
            this.loaded = false;
            this.updateFunc = null;
            this.objects = [];
            this.speechTime = options.speechTime || 2;
            this.timeouts = [];
            this.showEnergy = true;

            // Create Tile Manager
            this.tile_manager = new Juicy.Components.TileManager(this.game_width);
            this.tiles = new Juicy.Entity(this, [ this.tile_manager ]);

            // Create UI
            this.ui_entity = new Juicy.Entity(this, ['UI']);
            this.ui = this.ui_entity.getComponent('UI');

            this.esc = this.ui.addText({
                text: 'PRESS ESCAPE TO PAUSE',
                animate: 'SLIDE',
                showBackground: true,
                brightness: 2,
                position: Juicy.Point.create(1, 18)
            });

            // Create Player
            this.player = player;
            player.position = new Juicy.Point(16, 240);
            player.state = this;
            player.target = false;
            this.player.getComponent('Sprite').setSheet('img/mainchar.png', 15, 27);
            this.player.getComponent('Sprite').scale = 2;

            // Create Background
            if (options.backdrop !== false) {
                this.backdrop = new Juicy.Entity(this, ['Sprite']);
                this.backdrop.getComponent('Sprite').setSheet('img/screen1.png', 500, 1200);
            }

            // Particle Manager
            this.particles = new Juicy.Entity(this, ['ParticleManager']);

            // Camera info
            this.watching = this.player;
            this.camera = {
                x: this.player.position.x,
                y: this.player.position.y,
                give_x: 4,
                give_y: 0,
                dx: 8,
                dy: 20,
                offset_x: 0,
                offset_y: 0
            };

            if (this.camera.x < 0) 
                this.camera.x = 0;

            this.roomTitle = this.ui.addText({
                text: '',
                font: TEXT.FONTS.BIG,
                position: Juicy.Point.create(5, 5),
                brightness: 2,
                animate: 'DRAMATIC',
                delayPerCharacter: 8,
            });
        },

        timeout: function(callback, time) {
            this.timeouts.push([callback, time]);
        },

        cleanup: function() {
            music.stop(this.song);
        },
        
        init: function() {
            music.play(this.song);
        },

        gameOver: function() {
            var timeout = 2;

            this.update = function(dt, game) {
                this.ui_entity.update(dt);

                if (timeout > 1.8 && timeout - dt <= 1.8) {
                    this.ui.addText({
                        text: 'OUT OF FUEL!',
                        font: 'BIG',
                        animate: 'DRAMATIC',
                        position: Juicy.Point.create(80, 40),
                        center: true,
                        brightness: 3,
                        showBackground: true
                    });
                    sfx.play('dead');
                }

                timeout -= dt;
                if (timeout < 0) {
                    this.complete = true;
                    this.game.setState(new CityLevel());
                }
            };
        },

        key_ESC: function() {
            this.game.setState(new PauseState(this));
        },
        
        update: function(dt, game) {
            for (var i = 0; i < this.timeouts.length; i ++) {
                var timeout = this.timeouts[i];

                timeout[1] -= dt;
                if (timeout[1] < 0) {
                    timeout[0]();

                    this.timeouts.splice(i--, 1);
                }
            }

            if (this.shake > 0) {
                this.shake -= dt;

                if (this.shake < 0) {
                    this.shake = 0;
                }
            }

            var shouldUpdate = true;

            this.particles.update(dt);
            this.ui_entity.update(dt);

            if (this.updateFunc) {
                shouldUpdate = this.updateFunc(dt, game);
            }

            // Main update callers
            this.player.update(dt);

            if (this.player.position.x < 0) this.player.position.x = 0;
            if (this.player.position.x + this.player.width > this.tile_manager.width) {
                this.player.position.x = this.tile_manager.width - this.player.width;
            }

            for (var i = 0; i < this.objects.length; i ++) {
                this.objects[i].update(dt);
            }

            this.camera.dx = 8;
            this.camera.dy = 20;
            this.watching = this.player;

            for (var i = 0; i < this.objects.length; i ++) {
                if (this.objects[i].remove) {
                    this.objects.splice(i--, 1);
                }
            }

            this.updateCamera(dt);
        },
        
        updateCamera: function(dt) {
            // Update Camera
            var center = this.watching.center();
            var dx = (center.x - this.game.width / 2) - (this.camera.x + this.camera.offset_x);
            var dy = (center.y - this.game.height / 2) - (this.camera.y + this.camera.offset_y);

            this.camera.x += dx * this.camera.dx * dt;
            this.camera.y += dy * this.camera.dy * dt;
            if (this.camera.x < 0) 
                this.camera.x = 0;
            if (this.camera.x + this.game.width > this.tile_manager.width) {
                this.camera.x = this.tile_manager.width - this.game.width;
            }

            return 
        },

        render: function(context) {
            context.save();
            if (this.backdrop) {
                // context.save();
                // context.translate(-Math.round(this.camera.x / 200), 0);
                this.backdrop.render(context);
                // context.restore();
            }
            context.translate(-Math.round(this.camera.x + 2 * Math.sin(this.shake * 100)), -Math.round(this.camera.y));

            this.particles.render(context);
            
            for (var i = 0; i < this.objects.length; i ++) {
                this.objects[i].render(context);
            }
            this.player.render(context);

            context.restore();

            // Draw UI independent of Camera
            this.ui_entity.render(context);
        },

        placeName: function() {
            return COOL_NAME();
        },

        subtitle: function() {
           return COOL_PLACE_SUBTITLE(); 
        },
    });
})();