var pts;
var neuron;
var sample = 0;

function setup(){
    createCanvas(700,700);
    pts = new Points(100);
    inputs = [pts.x[sample], pts.y[sample]];
    target = pts.label[sample];
    neuron = new Perceptron(inputs, target);
}

function draw(){
    background(255);
    pts.show();
    neuron.training();
    sample++;
    inputs = [pts.x[sample], pts.y[sample]];
    target = pts.label[sample];
    neuron.setInput(inputs,target);
    //neuron.getOutput();
    console.log(neuron);
}