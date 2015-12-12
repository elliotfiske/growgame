Juicy.Component.create('Physics', {
    constructor: function() {
        this.dx = this.dy = 0;
        this.jumpPower = -120;
        this.weight = 0;
        this.weight_modifier = 1;

        this.collisions = {
          above: false,
          below: false,
          right: false,
          left: false
        };
    },

    update: function(dt, input) {
    var tileManager = this.entity.state.tile_manager;

    var transform = this.entity;

    var dx = this.dx * dt;
    var dy = this.dy * dt;

    var tl = tileManager.raycast(transform.position.x,                       transform.position.y, dx, dy);
    var tr = tileManager.raycast(transform.position.x + transform.width,     transform.position.y, dx, dy);
    var ml = tileManager.raycast(transform.position.x,                       transform.position.y + transform.height / 2, dx, dy);
    var mr = tileManager.raycast(transform.position.x + transform.width,     transform.position.y + transform.height / 2, dx, dy);
    var bl = tileManager.raycast(transform.position.x,                       transform.position.y + transform.height, dx, dy);
    var bm = tileManager.raycast(transform.position.x + transform.width / 2, transform.position.y + transform.height, dx, dy);
    var br = tileManager.raycast(transform.position.x + transform.width,     transform.position.y + transform.height, dx, dy);

    var mindx = tl.dx;
    var mindy = tl.dy;
    if (dx > 0) {
        if (Math.abs(tr.dx) < Math.abs(mindx))
             mindx = tr.dx;
        if (Math.abs(tr.dy) < Math.abs(mindy)) 
            mindy = tr.dy;
        if (Math.abs(mr.dx) < Math.abs(mindx)) 
            mindx = mr.dx;
    }
    if (Math.abs(br.dx) < Math.abs(mindx)) mindx = br.dx;
    if (Math.abs(br.dy) < Math.abs(mindy)) mindy = br.dy;
    if (Math.abs(bl.dx) < Math.abs(mindx)) mindx = bl.dx;
    if (Math.abs(bl.dy) < Math.abs(mindy)) mindy = bl.dy;
    if (Math.abs(bm.dy) < Math.abs(mindy)) mindy = bm.dy;
    if (Math.abs(ml.dx) < Math.abs(mindx)) mindx = ml.dx;

    // Walk across all the tiles
    transform.position.x += mindx;
    transform.position.y += mindy;

    if (dx !== 0 && Math.abs(mindx) < 0.01) {
        // We hit a wall
        if (dx < 0) 
            this.collisions.left = true;
        else 
            this.collisions.right = true;
    }

    if (dy !== 0 && Math.abs(mindy) < 0.01) {
        // We hit a wall
        if (dy < 0) 
            this.collisions.above = true;
        else 
            this.collisions.below = true;

        this.dy = 0;
    }

    },
    // render: function(context) {
    //     context.fillStyle = 'rgba(255, 0, 0, 0.5)';

    //     var center       = this.entity.center();
    //     var movement = (new Juicy.Point(this.dx, this.dy)).mult(0.018);

    //     var e_width = this.entity.width;
    //     for (var theta = 0; theta < Math.PI * 2; theta += Math.PI / 8) {
    //         var pt = center.add(Juicy.Point.create(Math.sin(theta), Math.cos(theta))._mult(e_width / 2))
    //         context.fillRect(pt.x - this.entity.position.x, pt.y - this.entity.position.y, 2, 2);
    //     }
    // }
});