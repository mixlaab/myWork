class Perceptron{
    //Constructor
    constructor(inputs_,theta_){
        this.x = [];
        this.theta = [];
        for(let i = 0; i < inputs_.length; i++){
            this.x[i] = inputs_[i];
            this.theta[i] = theta_[i];
        }
    }

    linearComb(){
        let suma = 1;
        for(let i = 0; i < this.x.length; i++){
            suma = suma + this.x[i]*this.theta[i];
        }
        return suma;
    }

    activation(z){
        var res = 1/(1+Math.exp(-z));
        return res;
    }

    output(act){
        //inputs = [myDots.x[i],myDots.y[i]];
        //myNeuron = new Perceptron(inputs,weights);
        //console.log(this);
        //var sum = this.linearComb();
        //console.log(sum);
        //var act = this.activation(sum);
        //console.log(act);

        strokeWeight(4);
        if(act > 0.5){
            var out = 1; 
            stroke(255,0,0);    
        }
        else{
            var out = -1;
            stroke(0,0,255);
        }
        point(this.x[0],this.x[1]);
        return out;

    }

    getError(target, guess){
        var error = target-guess;
        return error;
    }

    adjustTheta(error, inputs){
        var newTheta = [];
        var learningRate = 0.0001;
        for (let i = 0; i<inputs.length; i++){
            var deltaTheta = error*inputs[i];
            newTheta[i] = this.theta[i] + (deltaTheta*learningRate);
        }
        return newTheta;
    }
        
}