#include<stdio.h>
#include<stdlib.h>

int main() {
	/*
		Programa que recebe um array (valores pré-definidos) e conta 
		quantos elementos são negativos e a soma de todos eles.
	*/
	
	int v1[10] = {-1, -3, 4, 7, 15, -8, -11, -21, 8, 1};
	int i, contNegativo = 0, soma = 0;
	
	for(i = 0; i < 10; i++){
	    if (v1[i] < 0)
	        contNegativo++;
		else
	        soma = soma + v1[i];
	}
	
	printf("Numeros negativos: %d\n", contNegativo);
	printf("Soma dos numeros: %d\n", soma);
}
