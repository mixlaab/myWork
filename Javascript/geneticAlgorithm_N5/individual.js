class Individual{
    constructor(numGenes){
        this.genes = [];
        for(var i = 0; i < numGenes; i++){
            this.genes[i] = char(random(64,122));
            if(this.genes[i] == "@"){
                this.genes[i] = " ";
            }
        }
    }
    
    //Métodos
    show(posy){
        fill(255);
        textSize(32);
        text(this.genes.join(""), 200,posy);
    }
}