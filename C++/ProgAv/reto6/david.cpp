#include<iostream>
using namespace std;
#include<vector>
#include <bits/stdc++.h>

int solution(vector <int> A){
    sort(A.begin(), A.end());

    for(int i=0; i<A.size(); i++){
        cout<<A[i];
    }

    return 5;
}

int main(){

    int faltante;
    vector<int> A={2, 5, 4, 1, 6};
    faltante = solution(A);
    cout<<"\nEl número faltante es: "<<faltante<<endl;



}
