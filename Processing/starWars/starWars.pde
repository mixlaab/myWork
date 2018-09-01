String txt;
float y;
int largo;
PGraphics starWars;
float [] xp = new float [400];
float [] yp = new float [400];

void setup() {
  size(1000,600,P3D);
  //smooth();
  starWars = createGraphics(width, height, P3D);
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

void draw() {
  for (int i = 0; i < xp.length; i++) {
    point(xp[i], yp[i]);
  } 
  starWars.beginDraw();
  starWars.background(0);
  starWars.fill(254, 204, 0);
  starWars.textSize(width*0.02);
  starWars.textAlign(CENTER);
  starWars.rotateX(PI/3.5);
  starWars.text(txt, (width-largo)/2, y, largo, height*10);
  starWars.endDraw();
  image(starWars, 0, 0);
  y = y - 0.5;
}