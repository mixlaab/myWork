#include<iostream>
using namespace std;
#include<cmath>

float minjumps(float X, float Y, float D){

    float diff=(Y-X)/D;

    return diff;
}

int main(){

    float x, y, d;
    float resultado;

    cout<<"Enter initial point: ";
    cin>>x;

    cout<<"Enter final point: ";
    cin>>y;

    cout<<"Enter jump distance: ";
    cin>>d;

    resultado=minjumps(x,y,d);

    cout<<"Minimal amount of jumps needed: "<<ceil(resultado)<<endl;
}
