Caminador c;

void setup(){
  size(500,500);
  c = new Caminador();
}

void draw(){
  c.mostrar();
  c.darPaso();
}