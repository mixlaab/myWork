#include <iostream>
using namespace std;
    
    int minsaltos (int X, int Y, int D){
        int resultado = (Y - X)/D +1;
}

int main(){
    int X, y, D;
    int resultado;
    
    cout<< "Hijo, dame punto de inicio:"<< endl;
    cin >> X;
    
    cout<< "Hijo, dame punto final:"<< ednl;
    cin  >> Y;
    
    cout<< "Hijo, dame la distancia de salto"<< ednl;
    cin >> D;
        
    resultado = minsaltos(X, Y, D);
    
    cout<< "Hijo, el numero de saltos minimos es:"<< resultado;
    
}
