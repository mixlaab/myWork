#include<iostream>

using namespace std;

int minsaltos(int X, int Y, int D){
   int diff = (Y-X)/D +1;

}

int main(){
  int X, Y, D;
  int resultado;

  cout<< "bro, dame un punto de inicio: " << endl;
  cin >> X;

  cout<< "bro, dame un punto de fin: " << endl;
  cin >> Y;

  cout<< "bro, dame distancia de saltos: " << endl;
  cin >> D;

  resultado = minsaltos(X, Y, D);

  cout<< "bro, el número de saltos mínimo es" << resultado;
}
