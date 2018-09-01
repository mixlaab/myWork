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

public class starWars extends PApplet {

String txt;
float y;
int largo;
PGraphics starWars;
float [] xp = new float [400];
float [] yp = new float [400];

public void setup(){
	
	starWars = createGraphics(width,height,P3D);
	//size(1000, 500, P3D);
	String [] lines = loadStrings("miTexto.txt");
	txt = join(lines, "\n");
	y = height;
	largo = 300;
	stroke(255);
	for (int i = 0; i < xp.length; i++) {
		xp[i] = random(width);
		yp[i] = random(height);
	} 
}

public void draw(){
	for (int i = 0; i < xp.length; i++) {
		point(xp[i],yp[i]);
	} 
	starWars.beginDraw();
	starWars.background(0);
	starWars.fill(254,204,0);
	starWars.textSize(width*0.02f);
	starWars.textAlign(CENTER);
	starWars.rotateX(PI/3.5f);
	starWars.text(txt,(width-largo)/2,y,largo,height*10);
	starWars.endDraw();
	image(starWars,0,0);
	y = y - 0.5f;
}

  public void settings() { 	fullScreen(P3D); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "starWars" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
