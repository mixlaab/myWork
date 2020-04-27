#include<stdio.h>

float media(int* edades, int tam){
    float acum = 0;
    for(int i = 0; i < tam; i++){
        acum += edades[i];
    }
    return acum/tam;
}

int main(){
    int tam;
    printf("Cantidad de edades: ");
    scanf("%d",&tam);
    printf("Prueba: %d\n", tam); 
    int edades[tam];
    for(int i = 0; i < tam; i++){
        printf("Introduce edad %d: ",i);
        scanf("%d",&edades[i]);
    }
    printf("La edad media es: %f\n", media(edades, tam));
}
