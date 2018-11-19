var circle = {
	x: 250,
	y: 250,
	r : 30,
	vx: 5,
	vy: 7
};

var circle2 = {
	x: 250,
	y: 250,
	r : 30,
	vx: 15,
	vy: 17
};

function setup() {
  createCanvas(500, 500);
  background(0);
}

function draw() {
  background(0);
  showBall();
  moveBall();
  bounceBall();
  //print("x: ", circle.x, "y: ", circle.y);
}

function showBall() {
  fill(255,255,255);
  noStroke();
  ellipse(circle.x,circle.y,2*circle.r,2*circle.r);
  ellipse(circle2.x,circle2.y,2*circle2.r,2*circle2.r);
}

function moveBall(){
  circle.x = circle.x + circle.vx;
  circle.y = circle.y + circle.vy;
  circle2.x = circle2.x + circle2.vx;
  circle2.y = circle2.y + circle2.vy;
}

function bounceBall(){
  if(circle.x < circle.r || circle.x > width-circle.r){
    circle.vx = circle.vx*-1;
  }
  if(circle.y < circle.r || circle.y > height-circle.r){
    circle.vy = circle.vy*-1;
  }
  if(circle2.x < circle2.r || circle2.x > width-circle2.r){
    circle2.vx = circle2.vx*-1;
  }
  if(circle2.y < circle2.r || circle2.y > height-circle2.r){
    circle2.vy = circle2.vy*-1;
  }
}

