
#include <iostream>
#include <cmath>
using namespace std;

int solucion(int X, int Y, int D){
    float saltos;
    if (X<=Y){
        int distancia=Y-X;
        int saltos=ceil(distancia/D);
        cout << "La cantidad de saltos es: "<<saltos<< endl;
    }
    else {

        cout<<"Error "<<X<<" es mayor que "<<Y<<endl;
    }
    return saltos;

}

int main(){
    int A,B,C;
    A,B,C=0;
    cout<<"Cual es el punto de inicio? ";
    cin>> A;
    cout<<"Cual es el punto final? ";
    cin>> B;
    cout<<"Cual es la distancia de los saltos? ";
    cin>> C;
  solucion(A,B,C);
  }
