#include <stdio.h>
#include <stdlib.h>

void sorting(int A[], int len);
int largest(int A[], int len);
int solution(int A[], int len);
int cmpfun(const void *arg1, const void *arg2);

int main(){
    int myArray[] = {-1, -3};
    int len = sizeof(myArray) / sizeof(myArray[0]);
    qsort(myArray, len, sizeof(myArray[0]), cmpfun);
    int menor = solution(myArray, len);
    printf ("El menor número positivo que no aparece es: %i\n", menor);
    //printf ("El máximo elemento es %i\n", large);
    return 0;
}

int cmpfun(const void *arg1, const void *arg2){
    int resta = *(int *) arg1 - *(int *) arg2;
    return resta;
}

int solution(int A[], int len){
    int tam = 1;
    int j = 1;
    int res = 1;

    for (int i = 1; i < len; i++){
        if (A[i] != A[i-1]){
            tam++;
        }
    }

    int B[tam];
    B[0] = A[0];
    //printf("%i\n", B[0]);

    for (int i = 1; i < tam; i++){

        while (A[j] == A[j-1]){
            j++; //Saltar todos los números que se repitan
        }
        
        B[i] = A[j];
            
        j++;
        //printf("%i\n", B[i]);
    }

    for(int i = 0; i < tam; i++){
        if(B[i] == res){
            res++;
        }
    }
    return res;
}