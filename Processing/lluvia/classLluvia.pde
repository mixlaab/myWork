class Lluvia {
  //Atributo
  Gota[] gotitas = new Gota[100];

  //Constructor
  Lluvia() {
    for (int i = 0; i < gotitas.length; i++) {
      gotitas[i] = new Gota(random(0,width),random(5,10),color(random(0,255),random(0,255),random(0,255)));
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
}