class Walker{
  //Atributos
  int x;
  int y;
  
  //Constructor
  Walker(){
    x = width/2;
    y = height/2;
  }
  
  //Métodos
  void mostrar(){
    strokeWeight(5);
    point(x,y);
  }
  
  void mover(){
    int num = int(random(0,4));
    if(num == 0){
      y--;
    }
    else if(num == 1){
      x--;
    }
    else if(num == 2){
      x++;
    }
    else{
      y++;
    }
    x = constrain(x,0,width);
    y = constrain(y,0,height);
  }
}