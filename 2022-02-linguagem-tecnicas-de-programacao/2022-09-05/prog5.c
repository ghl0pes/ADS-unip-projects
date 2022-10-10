#include<stdio.h>

int main() {
	/*
		For loop com acréscimo de 2
	*/
	int i, soma = 0;
	
	for (i = 1; i <= 100; i += 2) {
		soma = soma + i;
	}
	
	printf("O valor de soma e: %d\n", soma);
	
	system("pause");
	return 0;
}
