#include<stdio.h>

int main(int argc, char *argv[]){
	int i = 0;
	printf("Hola, estás aprendiendo C!\n");
	printf("Número de argumentos en la función principal: %d\n", argc);
	
	for (i = 0; i < argc; i++){
		printf("El argumento número %d es %s\n",i,argv[i]);
	}
	return 0;
}
