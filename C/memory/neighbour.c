#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x = 10;
    int *p = &x;

    printf("Value: %d\n", *p);
    printf("Add: %p\n", p);

    p++;
    printf("---------------------\n");
    printf("Value: %d\n", *p);
    printf("Add: %p\n", p);

    p++;
    printf("---------------------\n");
    printf("Value: %d\n", *p);
    printf("Add: %p\n", p);
    return 0;
}
