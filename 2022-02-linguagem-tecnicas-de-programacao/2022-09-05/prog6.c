#include<stdio.h>

int main() {
	/*
		Cálculo da sequência de Fibonacci.	
	*/
	
	int i = 0, j = 1, k, limite;
	
	printf("Digite o limite do calculo de Fibonacci: ");
	scanf("%d", &limite);
	
	k = i + j;
	j = 1;
	
	while (k < limite) {
		j = i;
		i = k;
		k = i + j;
		
		printf("%d + %d = %d\n", i, j, k);
	}
	
	system("pause");
	return 0;
}
