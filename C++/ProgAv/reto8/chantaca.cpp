#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int E = (3,4,4,6,1,4,4);
int solution(vector<int> &A){
    sort(A.begin(),A.end());
    cout<<A[0];
    cout<<A[1];
    cout<<A[2];
    cout<<A[3];
    cout<<A[4];
    cout<<A[5];
    cout<<A[6];
    return E;

}
int main(){
    int Combinacion;
    vector <int> A={3,4,4,6,1,4,4};
    Combinacion=solution(A);
    cout << "Parcero, El Resultado es:"<<Combinacion<<endl;

}
