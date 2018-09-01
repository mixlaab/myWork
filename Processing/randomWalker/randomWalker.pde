Walker paul; //Declarar variable: Objeto

void setup(){
  size(400,400);
  paul = new Walker(); //Inicializando objeto
  background(255);
}

void draw(){
  paul.mostrar();
  paul.mover();
}