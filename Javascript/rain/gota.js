class Gota {
  constructor(){
    this.x1 = random(0, width); //posición 'x'
    this.y1 = random(0, height); //posición 'y'
    this.l = random(10,30); //longitud de gota
    this.vel = random(5,20); //velocidad de gota
  }
    
  mostrar(){
    stroke(200,0,200); //color de gota
    line(this.x1,this.y1,this.x1,this.y1+this.l);
  }
    
  caer(){
    this.y1 = this.y1 + this.vel; //mueve gota de posición 'y'
  }
    
  salir(){
    var res;
    if(this.y1 > height){
      res = true;
    }
    else{
      res = false;
    }
    return res; //retorna verdadero si sale de pantalla
  }
    
  regresar(){
    this.y1 = -this.l; //reinicia posición inicial de gota
  }
}