var pop;
var n = 20; //n elementos
var genes = 18;
//var ind;

function setup() {
    createCanvas(1000, 650);
    background(0);
    pop = new Population(n,genes); //Inicializar población
    //ind = new Individual(20);
}

function draw() {
    background(0);
    console.log(pop);
    //text('H',250,250);
    //var pool = pop.selection(); //Proceso de selección
    //pop = pop.reproduction(pool); //Proceso de reproducción y nueva generación
    pop.show(); //Mostrar población en el canvas
}



