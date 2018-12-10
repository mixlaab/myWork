#include <stdio.h>
#include <cs50.h>

//Prototype function
int square(int n);

int main(void){
	int x = get_int("Enter a number: ");
	printf("The square of %i is %i\n", x, square(x));
}

int square(int n){
	return n*n;
}
