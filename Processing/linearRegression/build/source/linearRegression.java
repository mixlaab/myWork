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

public class linearRegression extends PApplet {

ArregloV data;
boolean flag = false;

public void setup() {
  
  data = new ArregloV();
  background(0);
}

public void draw() {
  if (flag) {
    for (int i = 0; i < data.len(); i++) {
      data.vector[i].printVector();
      println(data.meanX());
      println(data.meanY());
    }
  }
}

public void mousePressed() {
  background(0);
  float x = map(mouseX,0,width,0,1);
  float y = map(mouseY,0,height,1,0);
  Vector v = new Vector(x, y);

  if (flag == false) {
    data.vector[0] = v;
    flag = true;
  } else {
    data.agregar(v);
  }
  
  float num = 0;
  float den = 0;
  
  for(int i = 0; i < data.len(); i++){
    float x_i = data.vector[i].x;
    float y_i = data.vector[i].y;
    float mx = map(x_i,0,1,0,width);
    float my = map(y_i,0,1,height,0);
    stroke(0xffD804C0);
    strokeWeight(7);
    point(mx, my);
    float A = x_i-data.meanX();
    float B = y_i-data.meanY();
    num = num + A*B;
    den = den + A*A;
  }
  
  float m = num/den;
  float b = data.meanY()-(m*data.meanX());
  
  float x1 = 0;
  float y1 = (m*x1)+b;
  float x2 = 1;
  float y2 = (m*x2)+b;
  
  x1 = map(x1,0,1,0,width);
  y1 = map(y1,0,1,height,0);
  x2 = map(x2,0,1,0,width);
  y2 = map(y2,0,1,height,0);
  
  strokeWeight(2);
  stroke(255,0,0);
  line(x1,y1,x2,y2);
  
}
class ArregloV {
  int dim;
  Vector [] vector;

  ArregloV() {
    vector = new Vector[1];
  }

  ArregloV(int dim_) {
    vector = new Vector[dim_];
  }

  public void agregar(Vector v) {
    vector = (Vector []) append(vector, v);
    //return arreglo;
  }

  public int len() {
    int l = vector.length;
    return l;
  }

  public float meanX() {
    float suma = 0;
    for (int i = 0; i < vector.length; i++) {
      suma = suma + vector[i].x;
    }
    float prom = suma/vector.length;
    return prom;
  }
  
  public float meanY() {
    float suma = 0;
    for (int i = 0; i < vector.length; i++) {
      suma = suma + vector[i].y;
    }
    float prom = suma/vector.length;
    return prom;
  }
}
class Vector{
  float x;
  float y;
  
  //Inicializando atributos del vector 2D
  Vector(float temp_x, float temp_y){
    x = temp_x;
    y = temp_y;
  }
  
  //Imprimiendo vector
  public void printVector(){
    print("x = ");
    print(x);
    print(", ");
    print("y = ");
    println(y);
  }
  
}
  public void settings() {  size(500, 500); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "linearRegression" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
