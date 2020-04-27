#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A){
    int i;
    int faltante;
    sort(A.begin(), A.end());
    for (i=0;i<A.size();i++){
        if (A[i]!=i+1){
             faltante=i+1;
             return faltante;
             break;
        }




    }

}

int main(){
    int f;
    vector <int> A={2,5,4,1,6};
    f= solution(A);
    cout<< "Falta el numero: "<<endl;
    cout<< f <<endl;

}
