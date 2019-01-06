#include<stdio.h>
#include<cs50.h>
#include<string.h>

char toUpper(char letra);

int main(void){
    char *a = get_string("Enter a name: ");
    char *b = a;

    //Convierte a mayúscula primer letra de array de char
    if (strlen(a)>0){
        a[0] = toUpper(a[0]);
    }
    printf("a: %s\n", a);
    printf("b: %s\n", b);
}

char toUpper(char letra){
    if(letra >= 97 && letra <= 122){
        letra -= 32;
    }
    return letra;
}
