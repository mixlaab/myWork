#include<iostream>
using namespace std;

int solution (int X, int Y, int D){
 int rest;
 float coc;
 rest = Y - X;
 coc = rest/D;
 return coc;


 /*
 float res;
 float diff = Y - X;
 float sal = diff/ X;
 float res = sal;
 return res;
 */


}

int main(){
  int X, Y, D;
  int resultado;
  cout<<"porfavor introduce tu punto inicial:" << endl;
  cin>> X;
  cout<<"porfavor introduce tu punto final:" << endl;
  cin>> Y;
  cout<<"porfavor introduce tu salto:" << endl;
  cin>> D;

  resultado = solution(X, Y, D);

  cout<< "parcero, el numero de saltos minimos es:" << resultado;
}
