
//Dado un array A de N enteros, retorne el entero positivo más pequeño (mayor que 0) que no está en A

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> A;
   vector<int> P,N;
   int vofP, p, l, v;

    cout<<"Enter lenght of array: ";
    cin>>l;

    for(int i=0; i<l; i++){
        cout<<"Index " <<i<<" of your array is: ";
        cin>> v;
        A.push_back(v);
    }

    //Primero separo los negativos de los positivos, los positivos los meto en el array P,
    // y los negativos en el array N. Los ordeno de mayor a menor. Postivos y negativos
    //en su respectivo array

    for(int i=0; i<A.size(); i++){
        if(A[i]>0){ // el numero 0 pasa como negativo
         P.push_back(A[i]);
         sort(P.begin(), P.end());
        }else{
         N.push_back(A[i]);
         sort(N.begin(), N.end());
        }
    }

    //si hay elementos en el array de positivos vofP=1, si no encuentra elementos
    //en el array P entonces vofP=0
    if(P.size()>0){
        vofP=1;
    }else{
        vofP=0;
    }

    p=P[0];

    //si sí hay elementos en P y si el primer elemento en P es 1, se encargará de
    // verificar que los elementos sean consecutivos, al momento de que se de cuenta
    //que no son consecutivos, retornará el último valor que registró incrementado en 1
    //ej. si hay 1,2,3,5 en P, el último elemento que registró es 3 y retornará 4
    if(vofP==1){
        if(P[0]==1){

            for(int i=0; i<P.size(); i++){
            if(p==P[i] || p+1==P[i]){
                p=P[i];
            }
          }
          cout<<"Minimun positive value that is not found in array is: "<<p+1<<endl;
        }else{ // si solamente hay valores positivos, pero empieza en un numero diferente a 1
               //ej. 4,5,6 retornará 1, pues es el valor más pequeño que no se encuentra en P
            p=1;
            cout<<p;
        }

    }else{
        //si no hay valores en P, quiere decir que solamente hay valores negativos o iguales a 0
        // por lo tanto el valor más pequeño que no está en el array será 1
        cout<<"Minimun positive value that is not found in array is: "<<1<<endl;
    }

}
