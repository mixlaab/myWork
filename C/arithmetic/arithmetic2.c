#include <stdio.h>
#include <cs50.h>

int main(void){
	double a = get_int("Enter the first number: ");
	double b = get_int("Enter the second number: ");
	
	printf("%.1f divided by %.1f is %.1f\n", a, b, a/b);
}
