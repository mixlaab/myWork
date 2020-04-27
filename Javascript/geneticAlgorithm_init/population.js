class Population{
    constructor(numInd,numGen){
        this.individuals = [];
        for(var i = 0; i < numInd; i++){
            this.individuals[i] = new Individual(numGen);
        }
    }
    
    show(){
        for(var i = 1; i <= this.individuals.length; i++){
            this.individuals[i-1].show(i*32);
        }
    }
}