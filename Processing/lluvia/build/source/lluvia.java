import processing.core.*; 
import processing.data.*; 
import processing.event.*; 
import processing.opengl.*; 

import java.util.HashMap; 
import java.util.ArrayList; 
import java.io.File; 
import java.io.BufferedReader; 
import java.io.PrintWriter; 
import java.io.InputStream; 
import java.io.OutputStream; 
import java.io.IOException; 

public class lluvia extends PApplet {

Lluvia tormenta;

public void setup(){
  
  tormenta = new Lluvia();
}

public void draw(){
  background(0);
  tormenta.mostrar();
}
class Gota{
  //Atributos
  float x1;
  float y1;
  float l;
  float vel;
  int c;
  float grosor;
  
  //Constructor
  Gota(){
    x1 = width/2;
    l = 20;
    y1 = -l;
    vel = 5;
    grosor = 3;
    c = color(0xff9B02D8);
  }
  
  Gota(float x1_, float vel_, int c_){
    x1 = x1_;
    l = 20;
    y1 = -l;
    vel = vel_;
    grosor = 3;
    c = c_;
  }
  
  //M\u00e9todos
  public void mostrar(){
    stroke(c);
    strokeWeight(grosor);
    line(x1,y1,x1,y1+l);
  }
  
  public void caer(){
    y1 = y1+vel;
  }
  
  public boolean salir(){
    boolean res;
    if(y1 > height){
      res = true;
    }
    else{
      res = false;
    }
    return res;
  }
  
  public void reiniciar(){
    y1 = -l;
  }
}
class Lluvia {
  //Atributo
  Gota[] gotitas = new Gota[100];

  //Constructor
  Lluvia() {
    for (int i = 0; i < gotitas.length; i++) {
      gotitas[i] = new Gota(random(0,width),random(5,10),color(random(0,255),random(0,255),random(0,255)));
    }
  }

  //M\u00e9todos
  public void mostrar() {
    for (int i = 0; i < gotitas.length; i++) {
      gotitas[i].mostrar();
      gotitas[i].caer();
      if (gotitas[i].salir() == true) {
        gotitas[i].reiniciar();
      }
    }
  }
}
  public void settings() {  size(400,400); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "lluvia" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
