class Points{

    constructor(tam){
        this.x = [];
        this.y = [];
        this.target = [];
        
        for (let i = 0; i < tam; i++){
            this.x[i] = random(width+1);
            this.y[i] = random(height+1);
    
            strokeWeight(4);
            if(this.x[i] > this.y[i]){
                this.target[i] = 1; 
                //stroke(255,0,0);    
            }
            else{
                this.target[i] = -1;
                //stroke(0,0,255);
            }
            //point(this.x[i],this.y[i]);
        }
    }
}