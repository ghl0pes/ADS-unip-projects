#include<stdio.h>

int main() {
	int a, b;
	
	printf("Insira dois numeros para realizar a subtracao: ");
	scanf("%d %d", &a, &b);
	
	printf("\n%d - %d = %d\n", a, b, a - b);
	
	system("pause");
	return 0;
}
