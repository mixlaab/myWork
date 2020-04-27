var a; //vector a (instanceof Array)
var b; //vector b (instanceof Matrix)
var c; //matrix c (instanceof Array)
var d; //matrix d (instanceof Matrix)

/*Making some vector and matrix operations with math.js

1. Vector operations: 
1.1 Scalar multiplication
1.2 Vector addition and subtraction
1.3 Dot product

2. Matrix operations: 
2.1 Scalar multiplication
2.2 Matrix addition and subtraction
2.3 Matrix multiplication
2.4 Hadamard Product
*/


function setup(){
    a = math.random([3,1]); //vector a: 3x1
    b = math.matrix(math.random([1,3])); //vector b: 1x3
    
    c = math.random([3,2]); //matrix c: 3x2
    d = math.matrix(math.random([2,3])); //matrix d: 2x3
    
    //ide = math.identity(3,3);
    //a = math.matrix([[random(1,4)],[3],[1]]);

    
}

function draw(){
    
}

function mousePressed(){
//    //1. Vector operations:
//    //1.1 Scalar multiplication
//    var scalarRes1 = math.multiply(2,a); 
//    console.table(a);
//    console.table(scalarRes1);
//    //Conversion to matrix
//    var scalarMatrix1 = math.matrix(scalarRes1);
//    console.table(scalarMatrix1);
//    //1.2 Vector addition and subtraction
//    var suma1 = math.add(math.transpose(a),b);
//    console.table(a);
//    console.table(b._data);
//    console.table(suma1._data);
//    var resta1 = math.subtract(math.transpose(a),b);
//    console.table(a);
//    console.table(b._data);
//    console.table(resta1._data);    
//    //1.3 Dot product
//    var dot = math.multiply(b,a);
//    console.table(b._data);
//    console.table(a);
//    console.table(dot._data);

/*
-------------------------------------------------------
*/    
//    //2. Matrix operations: 
//    
//    //2.1 Scalar multiplication
//    var scalarRes2 = math.multiply(2,c); 
//    console.table(c);
//    console.table(scalarRes2);
    
//    //2.2 Matrix addition and subtraction
//    var suma2 = math.add(math.transpose(c),d);
//    console.table(c);
//    console.table(d._data);
//    console.table(suma2._data);
//    var resta2 = math.subtract(math.transpose(c),d);
//    console.table(c);
//    console.table(d._data);
//    console.table(resta2._data);  
    
//    //2.3 Matrix multiplication
//    //Matrix multiplication is not commutative ;)
//    var product1 = math.multiply(c,d);
//    console.table(c);
//    console.table(d._data);
//    console.table(product1._data);
//    var product2 = math.multiply(d,c);
//    console.table(product2._data);
    
    //2.4 Hadamard Product
    var product3 = math.dotMultiply(math.transpose(c),d);
    console.table(c);
    console.table(d._data);
    console.table(product3._data);
}