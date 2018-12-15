#include <stdio.h>
#include <cs50.h>

int main(void){
	float reac = get_float("# de reactivos: ");
	//Valor de cada reactivo
	float val = 50/reac;
	for (int i = 0; i <= 13; i++){
		printf("%i aciertos: %f\n", i,(float) i*val);
	}
}
