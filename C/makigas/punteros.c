#include<stdio.h>

void jugar(int n){
    int var = n;
    var = 2*var +1;
    printf("%d \n",var);    
    n = var; 
}

int main(){
    int x = 10;
    int* dirX = &x;
    jugar(x);
    printf("%d \n",x);    
}

