
#include<iostream>//Librerias
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()//Metodo principal
{
    vector<int> S;
    vector<int> A,N;
    int vofP, a, l, v;

    cout<<"Digite largo del array: ";//Parametro
    cin>>l;

    for(int i=0; i<l; i++)
    {
        cout<<"Espacio " <<i<<" del array es: ";//Parametro
        cin>> v;
        S.push_back(v);
    }

    for(int j=0; j<S.size(); j++)
    {
        if(S[j]>0)// el numero 0 pasa como negativo
        {
         A.push_back(S[j]);
         sort(A.begin(), A.end());
        }
        else
        {
         N.push_back(S[j]);
         sort(N.begin(), N.end());
        }
    }

    if(A.size()>0)
    {
        vofP=1;
    }
    else
    {
        vofP=0;
    }

    a=A[0];

    if(vofP==1)
    {
        if(A[0]==1)
        {

            for(int e=0; e<A.size(); e++)
            {
            if(a==A[e] || a+1==A[e])
            {
                a=A[e];
            }
          }
          cout<<"El entero positivo más pequeño: "<<a+1<<endl;//Resultante
        }
        else
        {
            a=1;
            cout<<a;
        }

    }
    else
    {
        cout<<"El entero positivo más pequeño: "<<1<<endl;//Resultante
    }
}
