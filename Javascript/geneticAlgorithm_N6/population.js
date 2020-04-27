class Population{
    constructor(){
        this.individuals = [];
        for(var i = 0; i < 20; i++){
            this.individuals[i] = new Individual(); 
        }
    }
    
    show(   ){
        for(var i = 0; i < 20; i++){
            this.individuals[i].show(32*(i+1));
        }
    }
    
    selection(target){
        this.score = [];
        for(var i = 0; i < 20; i++){
            this.score[i]= 0;
        }
        for(var i = 0; i < 20; i++){
            for(var j = 0; j < 18; j++){
                if(this.individuals[i].genes[j] == target[j]){
                   this.score[i]++;
                }
            }
        }
        
        var suma = 0;
        for(var i = 0; i < 20; i++){
            suma = suma + this.score[i];
        }
        
        var numVeces = [];
        for(var i = 0; i < 20; i++){
            numVeces[i] = round(this.score[i]/suma*100);
        }
        
        this.pool = [];
        var start = 0;
        var end = numVeces[0];
        
        for(var i = 0; i < 20; i++){
            for(var j = start; j < end; j++){
                this.pool[j] = this.individuals[i]; 
            }
            start = end;
            end = end + numVeces[i+1];
        }
        
        //return pool;
        
    }
}