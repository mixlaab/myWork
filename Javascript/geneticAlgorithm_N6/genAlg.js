var pop;
//var ind;

function setup() {
    createCanvas(600,700);
    frameRate(1);
    pop = new Population();
    //ind = new Individual();
}

function draw() {
    background(0);
    //ind.show();
    pop.show();
    pop.selection("To be or not to be");
    console.log(pop);
    //pop.reproduction();
    //pop.replace();
}



