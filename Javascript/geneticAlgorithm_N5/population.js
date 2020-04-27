class Population{
    constructor(numGenes, numInd){
        this.individuals = [];
        for(var i = 0; i < numInd; i++){
            this.individuals[i] = new Individual(numGenes);
        }
    }
    
    show(){
        for(var i = 0; i < 20; i++){
            this.individuals[i].show(32*i+32);
        }
    }
    
    selection(target){
        this.score = [];
        for(var i = 0; i < 20; i++){
            this.score[i] = 0;
        }
        
        for(var i = 0; i < 20; i++){
            for(var j = 0; j < 18; j++){
                if(this.individuals[i].genes[j] == target[j]){
                    this.score[i]++;
                }
            }
        }
        
    }
}