let frame;
let jointA,jointB;
let xA,yA;
let xB,yB;
let xC,yC;
let link;
let vB_;
let theta1;

function setup(){
    createCanvas(600,600);
    background(255,0,255);
    xA = 0; yA = 0;
    xB = 100; yB = 0;
    xC = 200; yC = 0;
    frame = new Frame(0,0);
    jointA = new Joint(xA,yA);
    jointB = new Joint(xB,yB);
    jointC = new Joint(xC,yC);
    link1 = new Link(jointA,jointB);
    link2 = new Link(jointB,jointC);
    theta1 = 0;
    theta2 = 0;
    vB_ = zRotation(xB,yB,theta1);
    vC_ = zRotation(xC,yC,theta2);
    console.log(vB_);
}

function draw(){
    background(0);
    frame.showFrame();
    vB_ = zRotation(xB,yB,theta1);
    vC_ = zRotation(xC,yC,theta2);
    jointA.showJoint(xA,yA);
    jointB.showJoint(vB_[0],vB_[1]);
    jointC.showJoint(vC_[0],vC_[1]);
    link1.showLink(jointA,jointB);
    link2.showLink(jointB,jointC);
    theta1++;
    theta2--;
}

function zRotation(x,y,angle){
    angle = angle*PI/180;
    x_ = x*cos(-angle)+y*sin(-angle);
    y_ = -x*sin(-angle)+y*cos(-angle);
    myVector = [x_, y_];
    return myVector;
}

