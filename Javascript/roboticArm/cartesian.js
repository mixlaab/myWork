class Frame{
    constructor(x_,y_){
        this.x = this.setX(x_);
        this.y = this.setY(y_);
    }

    showFrame(){
        strokeWeight(3);
        stroke(255,0,0);
        line(this.x,this.y,this.x+50,this.y);
        stroke(0,255,0);
        line(this.x,this.y,this.x,this.y-50);
        strokeWeight(7);
    
        stroke(0,0,255);
        point(this.x,this.y);
    }

    setX(x_in) {
        let x_out = x_in+(width/2);
        return x_out;
    }
    
    setY(y_in) {
        let y_out = map(y_in, 0, width, width, 0)-(width/2);
        return y_out;
    }
}

class Joint{
    constructor(x_,y_){
        this.x = this.setX(x_);
        this.y = this.setY(y_);
    }

    showJoint(x,y){
        this.x = this.setX(x);
        this.y = this.setY(y);
        fill(255);
        noStroke();
        ellipse(this.x,this.y,20,20);
    }

    setX(x_in) {
        let x_out = x_in+(width/2);
        return x_out;
    }
    
    setY(y_in) {
        let y_out = map(y_in, 0, width, width, 0)-(width/2);
        return y_out;
    }
}

class Link{
    constructor(joint_1,joint_2){
        this.x1 = joint_1.x;
        this.y1 = joint_1.y;
        this.x2 = joint_2.x;
        this.y2 = joint_2.y;
    } 
    showLink(joint_1,joint_2){
        this.x1 = joint_1.x;
        this.y1 = joint_1.y;
        this.x2 = joint_2.x;
        this.y2 = joint_2.y;
        stroke(255,0,255);
        line(this.x1,this.y1,this.x2,this.y2);
    }
}