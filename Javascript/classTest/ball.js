class Ball{

    constructor(){
        this.x = width/2;
        this.y = height/2;
        this.vx = random(10);
        this.vy = random(5);
        this.r = 25;
        this.red = random(255);
        this.green = random(255);
        this.blue = random(255);
    }

    show(){
        fill(this.red,this.green,this.blue);
        ellipse(this.x,this.y,2*this.r,2*this.r);
    }

    move(){
        this.x = this.x + this.vx;
        this.y = this.y + this.vy;
    }

    bounce(){
        if(this.x < this.r || this.x > width-this.r){
            this.vx = this.vx*-1;
        }
        if(this.y < this.r || this.y > height-this.r){
            this.vy = this.vy*-1;
        }
    }

}