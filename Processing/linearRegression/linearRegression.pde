ArregloV data;
boolean flag = false;

void setup() {
  size(500, 500);
  data = new ArregloV();
  background(0);
}

void draw() {
  if (flag) {
    for (int i = 0; i < data.len(); i++) {
      data.vector[i].printVector();
      println(data.meanX());
      println(data.meanY());
    }
  }
}

void mousePressed() {
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
    stroke(#D804C0);
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