class Lluvia {
  //Atributo
  Gota[] gotitas;
  int cantidad;
  color c;

  //Constructor
  Lluvia(int cantidad_) {
    cantidad = cantidad_;
    gotitas = new Gota[cantidad];
    c = color(#DB0DC7);
    for (int i = 0; i < gotitas.length; i++) {
      gotitas[i] = new Gota(random(0,width),random(5,10),c);
    }
  }

  //Métodos
  void mostrar() {
    for (int i = 0; i < gotitas.length; i++) {
      gotitas[i].mostrar();
      gotitas[i].caer();
      if (gotitas[i].salir() == true) {
        gotitas[i].reiniciar();
      }
    }
  }
  
  void cambiarColor(){
    float R = random(0,256);
    float G = random(0,256);
    float B = random(0,256);
    for (int i = 0; i < gotitas.length; i++) {
      gotitas[i].c = color(R,G,B);
    }
  }
}