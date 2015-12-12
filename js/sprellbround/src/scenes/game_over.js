var GameOverScreen = Juicy.State.extend({
    constructor: function(player) {
        buzz.all().stop();
        this.title = new Juicy.Text('Game Over Bro.', '40pt Arial', 'white', 'center');
        this.desc = new Juicy.Text('Press ESC to go back', '30pt Arial', 'white', 'center');
        this.details = new Juicy.Text(window.name +  ': ' + player.getComponent('Score').score, '30pt Arial', 'yellow', 'center');
        this.music = newBuzzSound("audio/music_gameover,man", {formats:["mp3"]});
        player.getComponent('Score').submitScore();
    },
    init: function() {
        var self = this;
        this.music.play();
        this.game.input.on('key', 'ESC', function() {
            buzz.all().stop();
            self.game.setState(new TitleScreen());
        });
    },
    update: function() {
        return true;
    },
    render: function(context) {
        this.title.draw(context, GAME_WIDTH / 2, 30);
        this.desc.draw(context, GAME_WIDTH / 2, 80);
        this.details.draw(context, GAME_WIDTH / 2, 300);
    }
});
