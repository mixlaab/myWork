int x = 0; //Declarar posición x
int velx = 1; //Declarar velocidad
int y = 0;
int vely = 1;

void setup() {
  size(500, 500);
}

void draw() {
  mostrar();
  moverX(mouseX/10);
  moverY(9);
  botarX();
  botarY();
}