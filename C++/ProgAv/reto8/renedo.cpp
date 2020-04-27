
#include<iostream>//Librerias
#include<vector>//Librerias
#include <bits/stdc++.h>//Librerias
using namespace std;

vector<int> solution(int N, vector<int> S)//Solucion
{
    vector<int>cont;
    for(int i=0;i<N;i++)
    {
        cont.push_back(0);
    }
    for (int k=0;k<S.size();k++)
    {
        if(S[k]<=N)
        {
            cont[S[k]-1]++;
        }
        else
        {
            if (S[k]=N+1)
            {
               //(*Faltante*)
            }
        }
    }
    return cont;
}
int main()//Metodo principal
{
    int num;
    int var;
    int N;
    vector<int> res;
    cout <<"Digite valor de contadores: ";//Parametro
    cin>>N;
    cout<<"Digite cantidad de datos: ";//Parametro
    cin>>num;
    vector<int> A;
    for(int j=0;j<num;j++)
    {
        cout<<"Digite el numero"<<j+1<< ": ";//Parametro
        cin>>var;
        A.push_back(var);
    }
    res = solution(N,A);
    for(int e=0;e<res.size();e++)
    {
        cout<<res[e]<< ",";//resultante
    }
}
