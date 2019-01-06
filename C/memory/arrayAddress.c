#include<stdio.h>

int main(int argc, char const *argv[])
{
    int albondigas[6] = {2,4,6,2,10,25};
    size_t tam = sizeof(albondigas)/sizeof(int);  
    printf("El tamaño es %zu\n", sizeof(int));
    for (int i = 0; i < tam; i++){
        printf("Address: \t Value: \t Name: \n");
        printf("%p\t%d\t\talbondigas[%d]\n", &albondigas[i], albondigas[i], i);
    }
    return 0;
}
