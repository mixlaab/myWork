class Perceptron{
    //Constructor
    constructor(input_, target_){
        this.w =[];
        this.input = input_;
        this.target = target_;
        this.z = 0;
        this.lr = 0.01;
        for(var i = 0; i < this.input.length; i++){
            this.w[i] = random(-1,1);
        }
    }
    
    training(){
        this.getOutput();
        for(var i = 0; i < this.w.length; i++){
            console.log(this.target);
            console.log(this.output);
            var error = this.target - this.output;
            var deltaW = this.lr*error*this.input[i];
            this.w[i] = this.w[i]+deltaW;
        }
    }
    
    weightedSum(){
        var sum = 0;
        for(var i = 0; i < this.w.length; i++){
            sum = sum + this.w[i]*this.input[i];
        }
        return sum;
    }
    
    signum(val){
        if(val >= this.z){
            return 1;
        }
        else{
            return -1;
        }
    }
    
    setInput(input, target){
        this.input = input;
        this.target = target;
    }
    
    getOutput(){
        var sumatoria = this.weightedSum();
        var signo = this.signum(sumatoria);
        if (signo == 1){
            this.output = 1;
        }
        else{
            this.output = -1;
        }
    }
           
}