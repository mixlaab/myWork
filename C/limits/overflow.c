#include<stdio.h>
#include<unistd.h>
#include<cs50.h>

int main(void){
	int num = get_int("Enter a number, please: ");
	while(1){
		num = num*2;
		printf("%i\n", num);
		sleep(1);
	}
}
