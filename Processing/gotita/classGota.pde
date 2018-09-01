class Gota {
  //Atributos
  float x1;
  float y1;
  float largo;
  float vel;
  color c;

  //Constructor
  Gota() {
    x1 = width/2;
    largo = 20;
    y1 = -largo;
    vel = 5;
    c = color(#D709DB);
  }
  
  //Constructor #2
  Gota(float x1_, float vel_, color c_) {
    x1 = x1_;
    largo = 20;
    y1 = -largo;
    vel = vel_;
    c = c_;
  }

  //Métodos
  void mostrar() {
    stroke(c);
    strokeWeight(3);
    line(x1, y1, x1, y1+largo);
  }

  void caer() {
    y1 += vel;
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
    y1 = -largo;
  }
}