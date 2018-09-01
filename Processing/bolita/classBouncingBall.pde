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
    ace = 0.2;
    r = int(random(256));
    g = int(random(256));
    b = int(random(256));
  }

  void fall() {
    y = y + vel;
    vel = vel + ace;
    fill(r,g,b);
    if (vel<0) {
      ellipse(x, y, d-(vel*0.8), d+(vel*0.8));
    } else {
      ellipse(x, y, d, d);
    }
  }
  
  void bounce(){
    if (y > height-(d/1.5)) {
    vel = vel*(-0.85);
    a++;
    //println(y, height-(d/1.6), vel);
    if (a ==2) {
      //noLoop();
    }
    if (abs(vel)<1.25) {
      vel = 0;
      ace = 0;
    }
  }
  }
}