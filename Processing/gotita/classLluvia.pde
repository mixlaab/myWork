class Lluvia {
  //Atributos
  Gota[] gotas = new Gota[100];

  //Constructor
  Lluvia() {
    for (int i = 0; i < gotas.length; i++) {
      gotas[i] = new Gota(random(0,width),random(5,9),color(random(0,255),random(0,255),random(0,255)));
    }
  }

  void mostrar() {
    for (int i = 0; i<gotas.length; i++) {
      gotas[i].mostrar();
      gotas[i].caer();
      if (gotas[i].salir() ==  true) {
        gotas[i].reiniciar();
      }
    }
  }
}