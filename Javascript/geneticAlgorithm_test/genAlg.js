var pop;
var n = 100; //n elementos
var target = "To be or not to be";
var genes = target.length;
//var ind;

function setup() {
    createCanvas(1000, 650);
    background(0);
    pop = new Population(n,genes); //Inicializar población
    //ind = new Individual(20);
}

function draw() {
    background(0);
    pop.show(); //Mostrar población en el canvas
    console.log(pop);
    pop.clearScore(); //limpia puntaje para evitar que siga aumentando
    var pool = pop.selection(target); //Proceso de selección
    pop.reproduction(pool); //Proceso de reproducción y nueva generación
    //console.log(pool); 
}

function mousePressed(){ 
}



