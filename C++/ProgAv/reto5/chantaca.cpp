#include <iostream>
using namespace std;
int Wonejo(int X, int Y, int D){
    int U=X*D;//El primer valor y el tercero se multiplicaran y tendremos un resultado
    int then =U/Y;//El resultado se dividara por el segundo valor
}

int main(){
    int X, Y, D;
    int Resultado;
    cout<<"Parcero, punto de inicio:"<<endl;
    cin >> X;
    cout<<"Parcero, punto de fin:"<<endl;
    cin >> Y;
    cout<<"Parcero, punto de distancia:"<<endl;
    cin >> D;
    Resultado = Wonejo(X, Y, D);
    cout<<"Parcero, saltos necesarios minimos de Wonejo"<<Resultado<<endl;

}
