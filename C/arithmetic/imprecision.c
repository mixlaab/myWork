#include<stdio.h>
#include<cs50.h>

int main(void){
	float x = get_float("x: ");
	float y = get_float("y: ");
	
	printf("El resultado de x/y es %.5f ", x/y);
}

