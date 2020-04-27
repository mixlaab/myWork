
#include <iostream>
using namespace std;

int solution(int X, int Y, int D){
     int i=0;
    while (X<Y){
        X=X+D;
        i=i+1;
        }
    return i;
}
int main (){
    int X,Y,D;
    cout<<"Dame la posicion inicial:"<<endl;
    cin>>X;
    cout<<"Dame la posicion a la que quieres llegar:"<<endl;
    cin>>Y;
    cout<<"Dame el tamaño de salto:"<<endl;
    cin>>D;

    int S=solution(X,Y,D);
    cout<<"Numero de saltos:"<<endl;
    cout<<S<<endl;

}
