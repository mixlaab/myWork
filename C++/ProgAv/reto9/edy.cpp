#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> A){
    sort(A.begin(), A.end());
    int lenA=A.size();
    int entero = -1;
    for (int i=0;i < lenA; i++){
        if (A[i] + 1 != A[i + 1]){
            if (A[i] == A[i + 1]){
            }
            else {
                if (entero <= 0){
                    entero = A[i] + 1;
                }
            }
        }
    }
    if (entero <= 0){
        entero = 1;
    }
    cout << entero << endl;
}

int main() {
    vector<int> A{1, 6, 4, 1, 2};
    vector<int> B{1, 2, 3};
    //vector<int> C{0};
    //solution(C);
}
