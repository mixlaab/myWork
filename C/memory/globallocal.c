#include<stdio.h>

//int a = 4; //Variable global a

void increment();

int main(int argc, char const *argv[])
{
    int a = 4; //Variable local a
    increment();
    printf("a: %d --> %p\n", a, &a);
    return 0;
}

void increment(){
    a++;
    //printf("a: %d --> %p\n", a, &a);
}
