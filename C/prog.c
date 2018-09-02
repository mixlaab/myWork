#include <stdio.h>

int length = 40;


int main(){
	int fib[length];
	fib[0] = 0;
	fib[1] = 1;

	for(int i = 0; i < length-2; i++){
		fib[i+2] = fib[i] + fib[i+1];
	}

	for(int i = 0; i < length; i++){
		printf("Fibonacci #%d is: %d\n",i+1,fib[i]);
	}
	return 0;
}
