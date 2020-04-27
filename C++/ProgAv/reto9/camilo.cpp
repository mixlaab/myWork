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

    for(int i=0; i<A.size(); i++){
        if(A[i]>0){ // el numero 0 pasa como negativo
         P.push_back(A[i]);
         sort(P.begin(), P.end());
        }else{
         N.push_back(A[i]);
         sort(N.begin(), N.end());
        }
    }

    if(P.size()>0){
        vofP=1;
    }else{
        vofP=0;
    }

    p=P[0];

    if(vofP==1){
        if(P[0]==1){

            for(int i=0; i<P.size(); i++){
            if(p==P[i] || p+1==P[i]){
                p=P[i];
            }
          }
          cout<<"Minimun positive value that is not found in array is: "<<p+1<<endl;
        }else{
            p=1;
            cout<<p;
        }

    }else{
        cout<<"Minimun positive value that is not found in array is: "<<1<<endl;
    }
}
