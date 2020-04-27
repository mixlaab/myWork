var dias = ["lunes", "martes","miércoles","jueves"];
var index = 0;

function setup() {
  createCanvas(500, 500);  
  background(255);
}

function draw() {
    text(dias[index], width/2, height/2);
}

function mousePressed(){
    index = index + 1;
}



