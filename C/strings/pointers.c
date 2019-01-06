#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
	char *s = get_string("Enter name 1: ");
	char *t = get_string("Enter name 2: ");

	if (strcmp(s,t)==0){
		printf("Same\n");
	}
	else{
		printf("Different\n");
	}
}
