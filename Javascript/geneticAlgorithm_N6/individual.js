class Individual{
    constructor(){
        this.genes = [];
        for(var i = 0; i < 18; i++){
            this.genes[i] = char(random(65,122));
            if(this.genes[i] == "["){
                this.genes[i] = " ";
            }
        }
    }
    
    show(posy){
        var frase = this.genes.join("");
        //console.log(frase);
        fill(255);
        textSize(32);
        text(frase, 200,posy);
    }
}