#include <stdio.h>
#include <cs50.h>

int main(void){
	int a = get_int("Enter the first number: ");
	int b = get_int("Enter the second number: ");
	
	printf("%i plus %i is %i\n", a, b, a+b);
	printf("%i minus %i is %i\n", a, b, a-b);
	printf("%i times %i is %i\n", a, b, a*b);
	printf("The remainder of %i divided by %i is %i\n", a, b, a%b);
}
