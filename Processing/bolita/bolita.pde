Ball [] b = new Ball[10];

void setup() {
  size(400, 400);
  for (int i = 0; i<10; i++) {
    b[i] = new Ball();
  }
}

void draw() {
  background(0);
  noStroke();
  for (int i = 0; i<10; i++) {
    b[i].fall();
    b[i].bounce();
  }
}