Pikachu [] ratitas = new Pikachu[10]; //Declarando array de objetos pikachu
//Pikachu ratita1; //Declarando objeto
//Pikachu ratita2; //Declarando objeto
float x;

void setup(){
  size(500,500);
  //ratita1 = new Pikachu();
  //ratita2 = new Pikachu();
  for (int i = 0; i < ratitas.length; i++){
    ratitas[i] = new Pikachu(); //Inicializando array de objetos pikachu
  }
}

void draw(){
  background(128*sin(0.01*x)+128,128*sin(0.03*x)+128,128*sin(0.05*x)+128);
  for (int i = 0; i < ratitas.length; i++){
    ratitas[i].mostrar();
    ratitas[i].correr();
    ratitas[i].trans();
  }
  x++;
}

//1.Nombre de la clase
class Pikachu{
  //2. Atributos
  PImage pik;
  int posx;
  int posy;
  int speedx;
  int speedy;
  int ancho;
  int alto;
  //3. Constructor
  Pikachu(){
    pik = loadImage("nyancat.png");
    posx = width/2;
    posy = height/2;
    speedx = int(random(3,10));
    speedy = 0;
    ancho = pik.width/3;
    alto = pik.height/3;
  }
  //4. Métodos
  void mostrar(){
    imageMode(CENTER);
    image(pik,posx,posy,ancho,alto);
  }

  void correr(){
    posx = posx + speedx;
    posy = int(50*sin(0.05*posx)+height/2);
  }

  void trans(){
    if(posx > width+(ancho/2)){
      posx = 0-(ancho/2);
    }
  }
}