class Points{
    constructor(tempSize){
        this.x = [];
        this.y = [];
        this.label = [];
        this.size = tempSize;
        for(var i=0; i < this.size; i++){
            this.x[i] = random(0,width);
            this.y[i] = random(0,height);
        }
    }
    
    show(){
        for(var i = 0; i < this.size; i++){
            strokeWeight(1);
            stroke(0);
            line(0,0,width,height);
            strokeWeight(10);
            if(this.y[i] > this.x[i]){
                stroke(255,0,0);
                this.label[i] = -1;
            }
            else{
                stroke(0,0,255);
                this.label[i] = 1;
            }
            point(this.x[i],this.y[i]);
        }
    }
}