function setup() {
  createCanvas(500, 500);
  miProm = promedio4(9,5,9,6);
  console.log(miProm);
  let button = createButton("Presiona");
  button.mousePressed(() => background(random(255), random(255), random(255)));
}

function promedio4(a,b,c,d){
  let suma = a+b+c+d;
  let ans = suma/4;
  return ans;
}






