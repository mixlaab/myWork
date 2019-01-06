#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x = 5;
    void *p = &x;
    void *q;

    q = &p;

    printf("Name: x, Value: %d, Address: %p\n", x, p);
    printf("Name: p, Value: %p, Address: %p\n", p, q);
    printf("Name: unknown, Value: %p, Address: %p\n", *(p+1), p+1);
    return 0;
}
