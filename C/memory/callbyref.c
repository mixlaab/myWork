#include<stdio.h>

/*
Author: Victor Medrano
Purpose: See how to really increment the value of a variable using
pointers as arguments in a user defined function
*/

//Function prototype
void increment(int a);
void realincrement(int *p);

int main(int argc, char const *argv[])
{
    int a = 5;
    //increment(a);
    realincrement(&a);
    printf("a: %d is stored at %p\n", a, &a);
    return 0;
}

//Call by value
void increment(int a){
    a++;
    printf("a: %d is stored at %p\n", a, &a);
}

//Call by reference
void realincrement(int *p){
    *p = *p+1;
    printf("a: %d is stored at %p\n", *p, p);
}