class Population{
    constructor(numInd,numGen){
        this.individuals = [];
        this.score = [];
        for(var i = 0; i < numInd; i++){
            this.individuals[i] = new Individual(numGen);
            this.score[i] = 1;
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
                    //this.score[i]=this.score[i]+10;
                    this.score[i] = this.score[i]*2;
                }
            }
            //this.score[i] = this.score[i]/this.individuals[i].adn.length;
        }
        var suma = 0;
        for (var i = 0; i < this.individuals.length; i++){
            suma = suma + this.score[i]; //sumando puntaje
        }
        
        var veces = [];
        
        if (suma == 0){
            for (var i = 0; i < this.individuals.length; i++){
                veces[i] = round((1/20)*100); //obteniendo porcentaje de apareamiento
            }
        }
        else{
            for (var i = 0; i < this.individuals.length; i++){
                veces[i] = round((this.score[i]/suma)*100); //obteniendo porcentaje de apareamiento
            }
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
    
    reproduction(pool){
        //Repetir n veces, número de individuos
        for(var i = 0; i < this.individuals.length; i++){
            //Escoge dos padres
            var a = int(random(0,pool.length));
            var b = int(random(0,pool.length));
            var p1 = pool[a]; //Padre 1
            var p2 = pool[b]; //Padre 2
            
            //Cruce
            //1ra parte del ADN
            //var hijo = p1;
            var hijo = new Individual();
            var corte = int(random(p1.adn.length));
            for(var j = 0; j < corte; j++){
                hijo.adn[j] = p1.adn[j];
            }
            //2da parte del ADN
            for(var j = corte; j < p1.adn.length; j++){
                hijo.adn[j] = p2.adn[j];
            }
            
            //Mutación
            for(var j = 0; j < p1.adn.length; j++){
                var chance = random(0,100);
                if(chance < 0.2){
                    hijo.adn[j] = char(random(64,123));
                    if (hijo.adn[j] == '@'){
                        hijo.adn[j] = char(32);
                    }
                }
            }
            
            this.individuals[i] = hijo; //Nueva generación
        }
    }
    
    clearScore(){
        for(var i = 0; i < this.individuals.length; i++){
            this.score[i] = 1;
        }
    }
}