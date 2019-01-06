#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char doTheSwap(char *myArray, int start, int end);

int main(int argc, char const *argv[])
{
    char movie1[] = "The Return of the Jedi";
    int tam = strlen(movie1);
    char *movie2 = malloc(tam-1);
    //Copy of the original string
    for (int i = 0; i < tam; i++){
        movie2[i] = movie1[i];
    }
    //Do the swap
    for (int start = 0, end = tam-1; start < end; start++, end--){
        doTheSwap(movie2, start, end);
    }
    printf("%s\n", movie1);
    printf("%s\n", movie2);
    return 0;
}

char doTheSwap(char *myArray, int start, int end){
    char temp = myArray[start];
    myArray[start] = myArray[end];
    myArray[end] = temp;
    return *myArray;
}
