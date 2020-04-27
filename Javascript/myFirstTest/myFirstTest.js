function preload() {
  castillo = loadModel('iphone.obj', true);
}

function setup() {
  createCanvas(500, 500, WEBGL);
  //background(0);
}

function draw() {
  background(200);
  //rotateX(frameCount * 0.01);
  //rotateY(frameCount * 0.01);
  model(castillo);
}