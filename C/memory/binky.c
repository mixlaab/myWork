#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int *x;
    int *y;
    x = malloc(sizeof(int));
    *x = 42;
    y = x;

    printf("Address: \t Value: \t Name: \n");
    printf("%p \t %d \t\t %s \n", x, *x, "x");
    printf("%p \t %d \t\t %s \n", y, *y, "y");
    return 0;
}

