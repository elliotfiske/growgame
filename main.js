Juicy.Game.init(document.getElementById('game-canvas'), 160, 144, {
    LEFT: 37,
    UP: 38,
    RIGHT: 39,
    DOWN: 40,
    SPACE: 32,
    ESC: 27,
    ENTER: 13,

    W: 87,
    A: 65,
    S: 83,
    D: 68,
});

var canvas = document.getElementById('game-canvas');

var music = new Juicy.Music();
//music.load('tutorial', 'audio/music_tutorial');
// MUSIC HOOK

var sfx = new Juicy.SFX();
//sfx.load('goal', 'audio/fx_collectable');
// SFX HOOK

window.updateVolume(); // From state/options.js

function newGame() {
    localStorage.removeItem('tutorial');

    location.reload();
};

var loadingImg = new Image();
    loadingImg.src = 'img/loading.png';
var titleScreenImg = new Image();
    titleScreenImg.src = 'img/titlescreen-shine.png';
var fontImg = new Image();
    fontImg.src = 'img/font.png';

function startGame() {
    Juicy.Game.setState(new LoadingState(new HomeLevel({backdrop: true}), {
        load: function() {
            var completed = (loadingImg.complete ? 1 : 0) + 
                            (titleScreenImg.complete ? 1 : 0) + 
                            (fontImg.complete ? 1 : 0);

            return completed / 3;
        }
    })).run();
}

document.addEventListener('DOMContentLoaded', startGame, false);
