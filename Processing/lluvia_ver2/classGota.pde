class Gota{
  //Atributos
  float x1;
  float y1;
  float l;
  float vel;
  color c;
  float grosor;
  
  //Constructor
  Gota(){
    x1 = width/2;
    l = 20;
    y1 = -l;
    vel = 5;
    grosor = 3;
    c = color(#9B02D8);
  }
  
  Gota(float x1_, float vel_, color c_){
    x1 = x1_;
    l = random(10,20);
    y1 = -l-random(0,200);
    vel = vel_;
    grosor = 3;
    c = c_;
  }
  
  //Métodos
  void mostrar(){
    stroke(c);
    strokeWeight(grosor);
    line(x1,y1,x1,y1+l);
  }
  
  void caer(){
    y1 = y1+vel;
  }
  
  boolean salir(){
    boolean res;
    if(y1 > height){
      res = true;
    }
    else{
      res = false;
    }
    return res;
  }
  
  void reiniciar(){
    y1 = -l;
  }
}