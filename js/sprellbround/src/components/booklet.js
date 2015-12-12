Juicy.Component.create('Booklet', {
    constructor: function() {
        this.dx = 0;
        this.life = 2;
        this.hitSound = newBuzzSound( "audio/fx_bookhit", {
            formats: [ "wav"]
        });
    },

    setPowers: function(powers) {
        this.powers = powers;

        this.entity.getComponent('Box').fillStyle = Powerup.getColor(powers);
    },

    hasPowerup: function(name) {
        return this.powers.indexOf(Powerup[name]) >= 0;
    },

    deathParticles: function(posX, neg) {
        var self = this;

        this.entity.scene.particles.getComponent('ParticleManager').spawnParticles("255, 0, 0, ", 0.15, 8, function(particle, ndx) {
            return 0;
        },
        function(particle) {
            particle.x = posX;
            particle.y = self.entity.transform.position.y + self.entity.transform.height/2 - 0.07;
            particle.dx = (neg ? 1 : -1) * 50 * (Math.random() * 0.8 + 0.2) * 9;
            particle.dy = (Math.random() - 0.5) * 10;
            particle.startLife = 30;
            particle.life = particle.startLife;
        }, function(particle,ndx,dt) {
            particle.x += particle.dx * 0.0003;// * dt;
            particle.y += particle.dy * 0.01;// * dt;
            particle.dx *= 0.9;
            particle.dy *= 0.9;

//             console.log(dt);

            if (particle.life > particle.startLife) {
                particle.alpha = 1;
            }
            else {
                particle.alpha = particle.life / particle.startLife;
            }
        });
    },

    update: function(dt, input) {
        var tileManager = this.entity.scene.tileManager.getComponent('LevelTiles');

        var transform = this.entity.transform;

        var ray;
        if (this.dx > 0) {
            // Moving right
            var top = tileManager.raycast(transform.position.x + transform.width, transform.position.y, this.dx * dt, 0);
            var bot = tileManager.raycast(transform.position.x + transform.width, transform.position.y + transform.height, this.dx * dt, 0);

            if (Math.abs(top.dx) > Math.abs(bot.dx)) ray = bot;
            else ray = top;
        }
        else {
            // Moving left
            var top = tileManager.raycast(transform.position.x, transform.position.y, this.dx * dt, 0);
            var bot = tileManager.raycast(transform.position.x, transform.position.y + transform.height, this.dx * dt, 0);
            if (Math.abs(top.dx) > Math.abs(bot.dx)) ray = bot;
            else ray = top;
        }
        transform.position.x += ray.dx;

        this.life -= dt;
        if (Math.abs(ray.dx) < 0.1 || this.life < 0) {
            this.die(null);
            return;
        }

        var enemies = this.entity.scene.enemies;
        for (var i = 0; i < enemies.length; i ++) {
            if (this.entity.transform.testCollision(enemies[i].transform)) {
                this.die(enemies[i], enemies[i].getComponent('Enemy'));
                return;
            }
        }

        var objects = this.entity.scene.objects;
        for (var i = 0; i < objects.length; i ++) {
            if (this.entity !== objects[i] && this.entity.transform.testCollision(objects[i].transform)) {
                if (objects[i].getComponent('Destructible')) {
                    this.die(objects[i], objects[i].getComponent('Destructible'));
                    return;
                }
            }
        }
    },

    die: function(objectHit, componentWithHealth) {
        if (objectHit) {
            this.deathParticles(objectHit.transform.width, this.dx < 0);

            if (this.hasPowerup('SLOW')) {
                var phys = objectHit.getComponent('Enemy');
                if (phys) {
                    phys.slow = 1;
                }
            }

            if (this.poison) {
                var phys = objectHit.getComponent('Enemy');
                if (phys) {
                    phys.poison = 3;
                    phys.poisonMe();
                }
            }

            var shiggy = WOWOWOWOWOW(0.1, 0.1, 0.4);
            objectHit.getComponent('Animations').play(shiggy, "ouch");
        }
        else {
            if (this.dx < 0) {
                this.deathParticles(this.entity.transform.position.x, true);//-ray.dx);   
            }
            else {
                this.deathParticles(this.entity.transform.position.x + 0.8, false);      
            }
        }

        var damage = this.damage;
        if (this.hasPowerup('DAMAGE')) {
            damage += 15;
        }

        if (componentWithHealth && !this.hasPowerup('EXPLODE')) {
            componentWithHealth.health -= damage;
        }

        if (this.hasPowerup('EXPLODE')) {
            var radius = 3;

            var dist = this.entity.transform.distanceTo(this.entity.scene.player.transform);
            if (dist < radius) {
                var player = this.entity.scene.player.getComponent('Player');
                player.bounceBack(this.entity, 1.0);
            }

            var enemies = this.entity.scene.enemies;
            for (var i = 0; i < enemies.length; i ++) {
                var dist = this.entity.transform.distanceTo(enemies[i].transform);
                if (dist < radius) {
                    var enemy = enemies[i].getComponent('Enemy');
                    enemy.bounceBack(this.dx, - Math.random() * 20 - 20, 1.0);
                    enemy.health -= damage / 2;
                }
            }
        }

        this.hitSound.play();
        this.entity.dead = true;
    }
});
