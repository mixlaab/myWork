var x=25;
var vel=5 ;
function setup() {
  createCanvas(400, 400);
}

function draw() {
  background(255);
	ellipse(x,200,50,50);
  x=x+vel;
  if(x>375){
    vel=vel*-1;
  }
  if (x<25){
    vel=vel*-1;
  }
  console.log(x);
}
