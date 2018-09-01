class Vector{
  float x;
  float y;
  
  //Inicializando atributos del vector 2D
  Vector(float temp_x, float temp_y){
    x = temp_x;
    y = temp_y;
  }
  
  //Imprimiendo vector
  void printVector(){
    print("x = ");
    print(x);
    print(", ");
    print("y = ");
    println(y);
  }
  
}