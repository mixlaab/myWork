#include<iostream>

using namespace std;

int doTheSwap(int myArray[], int start, int end);

int main(int argc, char const *argv[])
{
    int myArray[] = {3,10,2,6,15,1};
    for(int s = 0, end = (sizeof(myArray)/sizeof(int))-1; s < end; s++, end--){
        doTheSwap(myArray, s, end);   
    }
    size_t tam = sizeof(myArray)/sizeof(int);
    for(int i = 0; i < tam; i++){
        cout << *(myArray+i) << endl;    
    }
    return 0;
}

int doTheSwap(int myArray[], int start, int end){
    int temp;
    temp = myArray[start];
    myArray[start] = myArray[end];
    myArray[end] = temp;
    return *myArray;
}