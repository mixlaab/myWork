Lluvia tormenta;

void setup(){
  size(400,400);
  tormenta = new Lluvia();
}

void draw(){
  background(#BEB9BF);
  tormenta.mostrar();
}