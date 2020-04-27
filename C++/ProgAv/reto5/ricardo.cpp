//reto 5
#include <iostream>
#include <cmath>
using namespace std;

int solucion(int X, int Y, int D){
    float brincos;
    if (X<=Y){
        int distancia=Y-X;
        int saltos=ceil(distancia/D);
        cout << " brincos dados es: "<<brincos<< endl;
    }
    else {

        cout<<"Error "<<X<<" es mayor que "<<Y<<endl;
    }
    return brincos;

}

int main(){
    int A,B,C;
    A,B,C=0;
    cout<<" punto de inicio? ";
    cin>> A;
    cout<<" punto final? ";
    cin>> B;
    cout<<"Cual es la distancia de brincos? ";
    cin>> C;
  solucion(A,B,C);
  }
