#include <stdio.h>
#include <cs50.h>

int main(void){
	float x = get_float("Enter the first number: ");
	float y = get_float("Enter the second number: ");

	if(x < y){
		printf("%.1f is less than %.1f\n",x,y);
	}
	else if(x > y){
		printf("%.1f  is greater than %.1f\n",x,y);
	}else{
		printf("%.1f is equal to %.1f\n",x,y);
	}
}

