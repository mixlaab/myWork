#include<stdio.h>
#include<cs50.h>
#include<string.h>

char toUpper(char letra);

int main(void){
    char *a = get_string("Enter a name: ");
    //Making a copy for a different location to string 'a':
    char *b = malloc(strlen(a)+1*sizeof(char));

    for(int i = 0, n = strlen(a); i <= n; i++){
        b[i] = a[i];
    }
    
    a[0] = toUpper(a[0]);

    //Printing in different ways the same damn thing...
    //The way #1: Just a string
    printf("a: %s\n", a);
    printf("b: %s\n", b);
    //The way #2: Like an array of chars
    printf("a: ");
    for (int i = 0, n = strlen(a); i < n; i++){
        printf("%c", a[i]);
    }
    printf("\n");
    printf("b: ");
    for (int i = 0, n = strlen(a); i < n; i++){
        printf("%c", b[i]);
    }
    printf("\n");
    //The way #3: Using pointers from hell
    printf("a: ");
    for (int i = 0, n = strlen(a); i < n; i++){
        printf("%c", *(a+i));
    }
    printf("\n");
    printf("b: ");
    for (int i = 0, n = strlen(a); i < n; i++){
        printf("%c", *(b+i));
    }
    printf("\n");
}

char toUpper(char letra){
    if(letra >= 97 && letra <= 122){
        letra -= 32;
    }
    return letra;
}
