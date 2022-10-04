#include<stdio.h>

int main() {
	int i, soma = 0;
	
	for (i = 1; i <= 100; i++) {
		soma = soma + i;
	}
	
	printf("O valor de soma e: %d\n", soma);
	
	system("pause");
	return 0;
}
