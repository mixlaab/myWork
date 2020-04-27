 
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> A, int N){

    vector<int> contador;
    int mv;

    for(int i=0; i<N; i++){
      contador.push_back(0);
    }

    for(int i=0; i<A.size(); i++){
      if(A[i]<=N){
          contador[A[i]-1]++;
      }else{
          mv=*max_element(contador.begin(), contador.end());

          for(int i=0; i<contador.size(); i++){
              contador[i]=mv;
          }
       }
    }

    return contador;
}

int main(){
  vector<int> A, res;
  int N, l, elem;

  cout<<"contadores: ";
  cin>>N;

  cout<<"arrays: ";
  cin>>l;

  for(int i=0; i<l; i++){
      cout<<"Index "<<i<<" es: ";
      cin>>elem;
      A.push_back(elem);
  }


  res=solution(A, N);

  cout<<"final es: ";

  for(int i=0; i<res.size(); i++){
      cout<<res[i];
  }

  cout<<endl;

}
