#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[]){
	printf("The number of arguments is %d\n", argc);
	printf("The arguments requested by the user are:\n");
	for(int i = 0; i < argc; i++){
		printf("%s\n", argv[i]);
	}
}