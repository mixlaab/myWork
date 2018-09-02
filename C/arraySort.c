#include <stdio.h>
#include <stdlib.h>

int solution(int A[], int len);
int largest(int A[], int len);
int cmpfun(const void *arg1, const void *arg2);

int main(){
    int myArray[] = {3,8,9,5,8,1};
    int len = sizeof(myArray) / sizeof(myArray[0]);
    int res = solution(myArray, len);
    int large = largest(myArray, len);
    printf ("La suma de los elementos es %i\n", res);
    printf ("El máximo elemento es %i\n", large);
    return 0;
}

int cmpfun(const void *arg1, const void *arg2){
    int resta = *(int *) arg1 - *(int *) arg2;
    return resta;
}

int solution(int A[], int len){
    qsort(A, len, sizeof(A[0]), cmpfun);
    int suma = 0;
    //int B[N];
    for(int i = 0; i < len; i++){
        suma = suma + A[i];
        //printf("%i\n", suma);
    }
    return suma;
}

int largest(int A[], int len){
    int maximo = A[0];
    for(int i = 1; i < len; i++){
        if(A[i] > maximo){
            maximo = A[i];
        }
    }
    return maximo;
}