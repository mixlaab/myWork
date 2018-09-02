#include <stdio.h>

int solution(int A[], int len);

int main(){
    int myArray[] = {1,2,3};
    int len = sizeof(myArray) / sizeof(myArray[0]);
    int res = solution(myArray, len);
    //printf ("La suma de los elementos es %d\n", res);
    return 0;
}

int solution(int A[], int len){
    int suma = 0;
    for(int i = 0; i < len; i++){
        suma = suma + A[i];
        printf("%i\n", suma);
    }
    return suma;
}