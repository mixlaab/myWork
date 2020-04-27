var drops = [];

function setup() {
  createCanvas(1000, 400);
  for (var i = 0; i < 200; i++) {
    drops[i] = new Gota();
  }

}

function draw() {
  background(255);
  for (var i = 0; i < drops.length; i++) {
    drops[i].mostrar();
    drops[i].caer();
    console.log(drops[i].salir());
    if (drops[i].salir() == true) {
      drops[i].regresar();
    }
  }
}
