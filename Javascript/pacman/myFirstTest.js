function setup(){
    createCanvas(400,400);
}

function draw(){
    background(220);
    if(mouseIsPressed){
       background(255,0,0);
    }
    
    if(keyIsPressed && keyCode=='112'){
        background(255,0,0);
    }
 
}

