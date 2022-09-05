#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
	int a, b;
	
	printf("Entre com dois numeros em ordem crescente: ");
	scanf("%d %d", &a, &b);
	
	if (b > a) {
		while (a <= b) {
			printf("Valor de a: %d\n", a);
			a++;
		}	
	} else {
		printf("Erro! Os numeros nao estao em ordem crescente\n");
	}
	
	
	system("pause");
	return 0;	
}
