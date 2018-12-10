#include<stdio.h>
#include<cs50.h>

int main(void){
	char ans = get_char("Do you want to make changes?: ");
	
	switch(ans){
		case 'y':
		case 'Y':
			printf("Hell, yes!\n");
			break;
		case 'n':
		case 'N':
			printf("Nein!\n");
			break;
	}
}
