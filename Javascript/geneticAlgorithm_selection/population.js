class Population{
    constructor(numInd,numGen){
        this.individuals = [];
        this.score = [];
        for(var i = 0; i < numInd; i++){
            this.individuals[i] = new Individual(numGen);
            this.score[i] = 0;
        }
    }
    
    show(){
        for(var i = 1; i <= this.individuals.length; i++){
            this.individuals[i-1].show(i*32);
        }
    }
    
    selection(target){
        for(var i = 0; i < this.individuals.length; i++){ //Recorriendo cada individuo 
            for(var j = 0; j < this.individuals[i].adn.length; j++){ //Recorriendo cada gen
                if(this.individuals[i].adn[j] == target[j]){
                    this.score[i]++;
                }
            }
        }
        var suma = 0;
        for (var i = 0; i < this.individuals.length; i++){
            suma = suma + this.score[i]; //sumando puntaje
        }
        
        var veces = [];
        for (var i = 0; i < this.individuals.length; i++){
            veces[i] = round((this.score[i]/suma)*100); //obteniendo porcentaje de apareamiento
        }
        
        var matingPool = [];
        var start = 0;
        for (var i = 0; i < this.individuals.length; i++){
            for(var j = start; j < start+veces[i]; j++){
                matingPool[j] = this.individuals[i]; //piscina con 100 elementos aprox.
            }
            start = start+veces[i];
        }
        return matingPool;
    }
    
    clearScore(){
        for(var i = 0; i < this.individuals.length; i++){
            this.score[i] = 0;
        }
    }
}