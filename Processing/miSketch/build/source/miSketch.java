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

public class miSketch extends PApplet {

public void setup(){
	
}

public void draw(){
	rectMode(CENTER);
	fill(255);
	rect(width/2,height/2,60,60);
}

public void mousePressed(){
	fill(0,0,255);
	rect(width/2,height/2,60,60);
	noLoop();
}

public void mouseReleased(){
	loop();
}



  public void settings() { 	size(400,400); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "miSketch" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
