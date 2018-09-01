class Caminador{
  float x;
  float y;
  int paso;
  
  Caminador(){
    x = width/2;
    y = height/2;
  }
  
  void mostrar(){
    point(x,y);
  }
  
  void darPaso(){
    paso = int(random(4));
    if(paso == 0){
      x++;
    }
    else if(paso == 1){
      x--;
    }
    else if(paso == 2){
      y++;
    }
    else if(paso == 3){
      y--;
    }
    println(paso);
  }
  
}