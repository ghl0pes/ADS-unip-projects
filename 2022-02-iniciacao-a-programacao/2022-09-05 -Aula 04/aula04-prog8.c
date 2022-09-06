#include<stdio.h>
#include<math.h>


int main() {
	int i, x , fat = 1, limite = 5;
	float soma = 1.00;
	
	printf("Digite o valor a ser calculado a exponencial: ");
	scanf("%d", &x);
	
	for (i = 1; i <= limite; i++) {
		fat = fat * i;
		
		soma = soma + (pow(x, i) / fat);
	}
	
	printf("%f\n", soma);
	
	system("pause");
	return 0;
}
