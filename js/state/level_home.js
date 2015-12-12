(function() {
    var player = new Juicy.Entity(this, ['Sprite', 'Player', 'Physics', 'Animations']);   
        player.getComponent('Player').updateAnim('IDLE');

    window.HomeLevel = Level.extend({

        timeout: function(callback, time) {
            this.timeouts.push([callback, time]);
        },

        cleanup: function() {
            this.tile_manager.cleanup();
            music.stop(this.song);
            this.tiles = null;
        },

        load: function(piece) {
            var cleanupProgress = this.tile_manager.cleanupLastManager();
            if (cleanupProgress < 1) {
                return cleanupProgress;
            }

            for (var i = 0; i < this.tile_manager.width / this.tile_manager.chunk_width; i ++) {
                if (this.loadedChunkRow === this.game_height + 1) {
                    this.tile_manager.buildChunk(i, this.loadedChunkRow, 'solid');
                }
                else if (this.loadedChunkRow < 2) {
                    this.tile_manager.buildChunk(i, this.loadedChunkRow, 'empty');
                }
                else {
                    this.tile_manager.buildChunk(i, this.loadedChunkRow);
                }
            }

            return (++this.loadedChunkRow / (this.game_height + 2));
        },

        init: function() {
            var self = this;
            if (!this.loaded) {
                this.loadedChunkRow = 0;
                this.game.setState(new LoadingState(this, {
                    // Pre-build chunks down to self.game_height!!
                    load: this.load.bind(this)
                }));
            }
            else {
                this.timeout(function() {
                    self.esc.remove = true
                }, 5);
            }

            music.play(this.song);

            this.box = new Juicy.Entity(this, ['Sprite']);
            this.box.getComponent('Sprite').setSheet('img/dialog.png', 362, 151);
            this.box.position = new Juicy.Point(17, 530);
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

            if (this._countdown !== false) {
                if (this._countdown > 0) {
                    var nextCountdown = this._countdown - dt;

                    if (Math.ceil(nextCountdown) !== Math.ceil(this._countdown)) {
                        this.countdownText.setText(Math.ceil(nextCountdown) + '');
                    }

                    this._countdown = nextCountdown;
                    if (this._countdown <= 0) {
                        this.countdownText.set({
                            delayPerCharacter: 0,
                            text: 'GO',
                            center: true,
                            animate: 'NONE'
                        });
                        sfx.play('jump');
                    }

                    shouldUpdate = false; // Don't update game yet
                }
                else if (this._countdown > -0.5) {
                    this._countdown -= dt;

                    if (this._countdown <= -0.5) {
                        this.countdownText.remove = true;
                    }
                }
            }

            if (this.updateFunc) {
                shouldUpdate = this.updateFunc(dt, game);
            }

            if (typeof(shouldUpdate) === 'undefined' || shouldUpdate) {
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
            }
            else {
                var alwaysUpdate = ['ColoredSprite', 'Follower'];

                for (var n = 0; n < alwaysUpdate.length; n ++) {
                    for (var i = 0; i < this.objects.length; i ++) {
                        this.objects[i].update(dt, alwaysUpdate[n]);
                    }
                }
            }

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
            var dy = (center.y - this.game.height / 2) - (this.camera.y + this.camera.offset_y);

            this.camera.y += dy * this.camera.dy * dt;
            
            this.camera.x = 0;

            return 
        },

        render: function(context) {
            context.save();
            if (this.backdrop) {
                context.save();
                context.translate(-this.camera.x, -this.camera.y);
                this.backdrop.render(context);
                context.restore();
            }
            context.translate(-Math.round(this.camera.x + 2 * Math.sin(this.shake * 100)), -Math.round(this.camera.y));

            this.tiles.render(context, this.camera.x, this.camera.y, this.game.width, this.game.height);

            this.particles.render(context);
            
            for (var i = 0; i < this.objects.length; i ++) {
                this.objects[i].render(context);
            }
            this.player.render(context);

            context.restore();

            // Draw UI independent of Camera
            this.ui_entity.render(context);
            this.box.render(context);
        },
    });
})();