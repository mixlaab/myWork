var pop;
//var ind;

function setup() {
    createCanvas(600, 650);
    //ind = new Individual(18);
    pop = new Population(18,20);
}

function draw() {
    background(0);
    ///ind.show();
    pop.show();
    pop.selection("To be or not to be");
    console.log(pop);
    //pop.reproduction();
    //pop.replace();
}



