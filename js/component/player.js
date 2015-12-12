Juicy.Component.create('Player', {
   constructor: function() {
      this.direction = 1;
      this.firingRate = 0.1;
      this.cooldown = 0;
      this.doingRecoil = false;
      this.invincible = 0;

      this.powerups = {};

      this.health = 4;
      this.maxhealth = 4;

      this.speed = 120;
      this.damage = 30;

      this.bigHurt = false;

      this.auraTime = 0;
      this.roulette = 4;

      this.tiny = false;
      this.bigBooks = false;
      this.vampire = false;
      this.vampireKills = 0;
      this.venomous = false;
   },
   takeDamage: function(damage) {
      damage = damage || 0.5;

      this.health -= damage;
      if (this.dodge) {
         if (Math.random() > 0.60) {
            this.health += damage;
            this.dodgeSound.play();
         }
      }

      if (damage >= 0) {
         this.invincible = 2;

         if (this.health <= 0) {
            this.entity.dead = true;
         }
         else if (this.health > 4) {
            this.health = 4;
         }
      }

      this.updateGUI();
   },
   updateGUI: function() {
      var bars = [];
      var powers = Object.keys(this.powerups);
      for (var i = 0; i < powers.length; i ++) {
         bars.push({
            color: Powerup.colors[powers[i]],
            mana: this.powerups[powers[i]]
         });
      }

      this.entity.state.gui.getComponent('GUI').setPowerBars(bars, Powerup.getColor(powers));
      this.entity.state.gui.getComponent('GUI').setHealth(this.health, this.maxhealth);
   },
   setPowerup: function(name, mana) {
      if (this.powerups[name] && this.powerups[name] >= mana) {
         return;
      }
      else {
         this.powerups[name] = mana;
      }

      this.updateGUI();
   },

   update: function(dt, input) {
    var speed = this.speed;

    var physics = this.entity.getComponent('Physics');
    if (!physics)
        return;

    physics.dy = 0;
    physics.dx = 0;
    if (input.keyDown('UP')) {
        physics.dy = -speed;
        // this.updateAnim('UP');
    }
    if (input.keyDown('DOWN')) {
        physics.dy = speed;
        // this.updateAnim('DOWN');
    }
    if (input.keyDown('LEFT')) {
        physics.dx = -speed;
        // this.updateAnim('LEFT');
    }  
    if (input.keyDown('RIGHT')) {
        physics.dx = speed;
        // this.updateAnim('RIGHT');
    }

    this.updateAnim(input.inputStackTop());

    // Test colliding with objects
    var objects = this.entity.state.objects;
    for (var i = 0; i < objects.length; i ++) {
         var object = objects[i];

         if (this.entity.transform.testCollision(object.transform)) {
            // Collided with this object. Test whether it matters
            var powerup = object.getComponent('Powerup');
            if (powerup) {
               this.setPowerup(powerup.power, this.entity.getComponent('Upgrades').mana);
               this.powerupSound.play();
               objects[i].dead = true;
            }

            var heart = object.getComponent('Heart');
            if (heart && this.health < 4) {
               this.takeDamage(-1);
               objects[i].dead = true;
            }
         }
      }

      var dist = Math.sqrt(physics.dx*physics.dx + physics.dy*physics.dy);
      this.entity.getComponent('Sprite').advanceAnimation(dist * 0.07);
   },

   updateAnim: function(newDirection) {
        if (this.direction == newDirection) {
            return;
        }

        this.direction = newDirection;

        var sprite = this.entity.getComponent('Sprite');
        sprite.flipped = false;
        if (this.direction == 'IDLE') {
            this.entity.visualTransform.scale.x = 1;
            sprite.runAnimation(0, 0, 0.16, true);
        }
        else if (this.direction == 'LEFT') {
            sprite.runAnimation(4, 7, -1, true);
            sprite.flipped = true;
        }
        else if (this.direction == 'RIGHT') {
            sprite.runAnimation(4, 7, -1, true);

        }
        else if (this.direction == 'DOWN') {
            sprite.runAnimation(2, 3, -1, true);
        }
        else if (this.direction == 'UP') {
            sprite.runAnimation(0, 1, -1, true);
        }
   },
});
