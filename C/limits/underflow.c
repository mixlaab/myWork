#include<stdio.h>
#include<unistd.h>
#include<cs50.h>

int main(void){
	unsigned short num = get_int("Enter a number, please: ");
	while(1){
		num--;
		printf("%hu\n", num);
		sleep(1);
	}
}
