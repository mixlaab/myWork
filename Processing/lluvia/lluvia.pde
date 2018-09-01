Lluvia tormenta;

void setup(){
  size(400,400);
  tormenta = new Lluvia();
}

void draw(){
  background(0);
  tormenta.mostrar();
}