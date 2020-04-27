int x = 200;
int y = 200;
int velx = 5;
int r = 25;
float red = random(255);
float green = random(255);
float blue = random(255);

void setup(){
    size(400,400);
}

void draw(){
    background(red,green,blue);
    ellipse(x,y,2*r,2*r);
	x = x + velx;
	if(x > width-r || x < r){
		velx = velx*-1;
        red = random(255);
        green = random(255);
        blue = random(255);
	}	
}	
