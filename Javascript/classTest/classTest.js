let balls = []; 

function setup(){
    createCanvas(500,500);
}

function draw(){
    background(0,100,85);
    for(let ball of balls){
        ball.show();
        ball.move();
        ball.bounce();
    }
}

function mousePressed(){
    let b = new Ball();
    balls.push(b);
}