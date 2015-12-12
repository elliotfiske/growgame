var UpgradeScreen = Juicy.State.extend({
    constructor: function(player, levelNum) {
        this.player = player;
        this.levelNum = levelNum;

        var itemStartY = -300;
        var itemWidth = 200;
        var itemPadding = 50;

        this.gotPowerup = false;

        // Get player upgrades
        var upgrades = this.player.getComponent('Upgrades');

        this.title = new Juicy.Text("Choose an upgrade", '40px Arial', 'white', 'center');

        var self = this;
        var createScroll = function(name, tint, waitTime, x) {
            var info = upgrades.nextUpgrade(name);
            if (!info) {
                return false;
            }

            var scroll = new Juicy.Entity(self, ['Image', 'UpgradeScroll']);
            scroll.transform.position.x = x;

            scroll.getComponent('UpgradeScroll').setUpgradeInfo(info);
            scroll.getComponent('UpgradeScroll').timeUntilDrop = waitTime;
            scroll.getComponent('Image').setImage('./img/upgrade_scroll.png');
            scroll.getComponent('Image').opacity = 0;
            scroll.getComponent('Image').tint = tint;

            var button = new Juicy.Entity(self, ['Image', 'Animations', 'Button']);
            button.transform.position.y = 180;
            button.transform.position.x = 70;
            button.getComponent('Image').setImage('./img/button.png');
            button.getComponent('Button').action = function() {
                if (self.gotPowerup) {
                    console.log('ow');
                    return;

                }

                self.gotPowerup = true;

                // This refers to the Button Component here
                upgrades.getNextUpgrade(name);

                fade = customFunctionAnimation(function() {
                    button.getComponent('Image').opacity = 1 - this.currTime;
                }, 1);

                var backToLevel = customFunctionAnimation(function() {
                    TransitionManager.toMachine();
                    scroll.transform.children = [];
                }, 0);
        
                fade.nextAnimation = backToLevel;

                TransitionManager.onComplete = function() {
                    buzz.all().stop();
                    Game.setCanvas(GameCanvas);
                    Game.setState(new Level(self.player, self.levelNum+1));
                    //Check if player has medic perk
                    if (upgrades.levels.magic >= 2) {
                        self.player.health = 4;
                    }
                    ga('send', 'pageview', 'playscreen', 'Play Screen');
                }
        
                this.entity.getComponent('Animations').play(fade, "fadeOut");
            };

            scroll.transform.addChild(button);

            return {
                scroll: scroll,
                button: button
            };
        }

        this.magic   = createScroll('magic',   'purple', 0,   itemPadding);
        this.agility = createScroll('agility', 'green',  0.5, 2 * itemPadding + itemWidth);
        this.power   = createScroll('power',   'red',    1,   3 * itemPadding + 2 * itemWidth);
    },
    init: function() {
        this.game.setCanvas(ShopCanvas);
    },
    click: function(x, y) {
        if (this.magic) this.magic  .button.getComponent('Button').checkMouseClick(x, y);
        if (this.agility) this.agility.button.getComponent('Button').checkMouseClick(x, y);
        if (this.power) this.power  .button.getComponent('Button').checkMouseClick(x, y);
    },
    update: function(dt) {
        if (this.magic) {
            this.magic.scroll.update(dt);
            this.magic.button.update(dt);
        }
        if (this.agility) {
            this.agility.scroll.update(dt);
            this.agility.button.update(dt);
        }
        if (this.power) {
            this.power.scroll.update(dt);
            this.power.button.update(dt);
        }
    },
    render: function(context) {
        this.title.draw(context, GAME_WIDTH / 2, 50);

        if (this.magic)   this.magic  .scroll.render(context);
        if (this.agility) this.agility.scroll.render(context);
        if (this.power)   this.power  .scroll.render(context);
    }
});