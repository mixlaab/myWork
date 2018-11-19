let myNeuron;
let myDots;
let inputs;
let weights;

function setup(){
    createCanvas(500,500);
    background(180);
    frameRate(1);
    myDots = new Points(500);
    //inputs = [myDots.x[0],myDots.y[0]];
    weights = [random(-1,1), random(-1,1)];
}

function draw(){
    //Drawings
    console.log(weights);
    background(180);
    stroke(0);
    strokeWeight(1);
    line(0,0,width,height);
    //Neuron proceedings
    for (let i = 0; i < myDots.x.length; i++){
        myNeuron = new Perceptron([myDots.x[i],myDots.y[i]],weights);
        var sum = myNeuron.linearComb();
        var act = myNeuron.activation(sum);
        var out = myNeuron.output(act);
        var e = myNeuron.getError(myDots.target[i], out);
        weights = myNeuron.adjustTheta(e, [myDots.x[i],myDots.y[i]]);
    }

    //var e = myNeuron.getError();
}