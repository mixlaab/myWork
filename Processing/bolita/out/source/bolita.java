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

public class bolita extends PApplet {

Ball [] b = new Ball[10];

public void setup() {
  
  for (int i = 0; i<10; i++) {
    b[i] = new Ball();
  }
}

public void draw() {
  background(0);
  noStroke();
  for (int i = 0; i<10; i++) {
    b[i].fall();
    b[i].bounce();
  }
}
class Ball {
  float x, y;
  float d;
  float vel, ace;
  int a;
  int r,g,b;

  Ball() {
    x = random(width);
    y = 0;
    d = 40;
    vel = random(1,3);
    ace = 0.2f;
    r = PApplet.parseInt(random(256));
    g = PApplet.parseInt(random(256));
    b = PApplet.parseInt(random(256));
  }

  public void fall() {
    y = y + vel;
    vel = vel + ace;
    fill(r,g,b);
    if (vel<0) {
      ellipse(x, y, d-(vel*0.8f), d+(vel*0.8f));
    } else {
      ellipse(x, y, d, d);
    }
  }
  
  public void bounce(){
    if (y > height-(d/1.5f)) {
    vel = vel*(-0.85f);
    a++;
    //println(y, height-(d/1.6), vel);
    if (a ==2) {
      //noLoop();
    }
    if (abs(vel)<1.25f) {
      vel = 0;
      ace = 0;
    }
  }
  }
}
  public void settings() {  size(400, 400); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "bolita" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
