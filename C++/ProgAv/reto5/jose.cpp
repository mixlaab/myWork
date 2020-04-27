#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){
    float n;
    float X, Y, D;
    float resta;
    float division;
    cout<< "Ingresa un punto inicio:"<< endl;
    cin>> X;

    cout<< "Ingresa un punto final:"<< endl;
    cin>> Y;


    cout<< "Distancia de saltos de la vaca:"<< endl;
    cin>> D;

resta= Y-X;
system ("pause");
division= resta/D;
n = ceil(division);

cout<< "El resultado es:"<<n<<endl;

return 0;
}

