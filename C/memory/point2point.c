#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int *p; //Pointer to an integer type
    int **q; //Pointer to a pointer
    int ***r; // Ptr to a ptr to a ptr

    p = &a;
    q = &p;
    r = &q;

    printf("Value:\t\tAddress:\tName:\n");
    printf("%d\t\t%p\ta\n", a, p);
    printf("%p\t%p\tp\n", p, q);
    printf("%p\t%p\tq\n", q, r);
    printf("%p\t%p\tr\n", r, &r);

    printf("--------------------------------\n");
    //The same
    printf("Value:\t\tAddress:\tName:\n");
    printf("%d\t\t%p\ta\n", *p, p);
    printf("%p\t%p\tp\n", *q, q);
    printf("%p\t%p\tq\n", *r, r);
    printf("%p\t%p\tr\n", r, &r);
    return 0;
}