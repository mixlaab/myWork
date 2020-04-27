#include<iostream>
using namespace std;

int saltos(int X, int Y, int D){
 int res;
 int diff = Y-X;
 return res;
}


int main(){
 int X, Y, D;
 int resultado;
 cout<<"Introduce el punto de inicio:" << endl;
 cin >> X;
 cout<<"Introduce punto de fin:" << endl;
 cin >> Y;
 cout<<"Cantidad de distancia de saltos:" << endl;
 cin >> D;

resultado = saltos(X,Y,D);

   cout<<" Cantidad saltos minimos es"<<resultado;

}
