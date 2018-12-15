#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void){
	string name = get_string("Type your name, please: ");
	printf("Hello %s\n", name);
	int num = 0;
	for (int i = 0; i < strlen(name); i++){
		printf("%c\n", name[i]);
	}

	while(name[num] != '\0'){
		printf("%c\n", name[num]);
		num++;
	}
	printf("Your name has %i letters\n", num);
}

