Lluvia tormenta1;
Lluvia tormenta2;

void setup(){
  size(700,700);
  tormenta1 = new Lluvia(100);
  tormenta2 = new Lluvia(100);
}

void draw(){
  //background(0);
  fill(255,255,255,200);
  rect(0,0,width,height);
  pushMatrix();
  translate(width/2,height/2);
  rotate(PI/2);
  translate(-width/2,-height/2);
  tormenta1.mostrar();
  popMatrix();
  tormenta2.mostrar();
}

void keyPressed(){
  if(keyCode == 65){
    tormenta1.cambiarColor();
    tormenta2.cambiarColor();
  }
}