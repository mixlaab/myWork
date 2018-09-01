class ArregloV {
  int dim;
  Vector [] vector;

  ArregloV() {
    vector = new Vector[1];
  }

  ArregloV(int dim_) {
    vector = new Vector[dim_];
  }

  void agregar(Vector v) {
    vector = (Vector []) append(vector, v);
    //return arreglo;
  }

  int len() {
    int l = vector.length;
    return l;
  }

  float meanX() {
    float suma = 0;
    for (int i = 0; i < vector.length; i++) {
      suma = suma + vector[i].x;
    }
    float prom = suma/vector.length;
    return prom;
  }
  
  float meanY() {
    float suma = 0;
    for (int i = 0; i < vector.length; i++) {
      suma = suma + vector[i].y;
    }
    float prom = suma/vector.length;
    return prom;
  }
}