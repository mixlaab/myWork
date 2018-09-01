void mostrar() {
  //background(0);
  fill(0,0,0,20);
  rect(0,0,width,height);
  noStroke();
  fill(#F311F7);
  ellipse(x, y, 50, 50);
}

void moverX(int factor) {
  x = x + (velx*factor);
}

void moverY(int factor) {
  y = y + (vely*factor);
}

void botarX() {
  if (x <= 0 || x >= width) {
    velx = velx*-1;
  }
}

void botarY() {
  if (y <= 0 || y >= height) {
    vely = vely*-1;
  }
}