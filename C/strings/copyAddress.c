#include <stdio.h>
#include <cs50.h>
#include <string.h>

char toUpper(char letra);

int main(void){
	string s = get_string("Enter name #1: ");
	string t = s;

	s[0] = toUpper(s[0]);
	printf("%s\n",s);
	printf("%s\n",t);
}

char toUpper(char letra){
	char letrota;
	if (letra >= 97 && letra <= 122){
		letrota = letra - 32;
	}
	else{
		letrota = letra;
	}
	return letrota;
}
