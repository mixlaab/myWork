void setup(){
	size(400,400);
}

void draw(){
	rectMode(CENTER);
	fill(255);
	rect(width/2,height/2,60,60);
}

void mousePressed(){
	fill(0,0,255);
	rect(width/2,height/2,60,60);
	noLoop();
}

void mouseReleased(){
	loop();
}



