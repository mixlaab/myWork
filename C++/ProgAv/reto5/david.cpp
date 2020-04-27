#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){
    float n;
    float X, Y, D;
    float resta;
    float division;
    cout<< "punto inicio:"<< endl;
    cin>> X;

    cout<< "punto final:"<< endl;
    cin>> Y;


    cout<< "saltos de la vaca:"<< endl;
    cin>> D;

resta= Y-X;
system ("pause");
division= resta/D;
n = ceil(division);

cout<< "resultado:"<<n<<endl;

return 0;
}
