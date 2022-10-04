#include<stdio.h>

int main() {
	int a, b;
	
	printf("Insira dois numeros para serem divididos");
	printf("\nO segundo numero deve ser diferente de 0: ");
	
	scanf("%d %d", &a, &b);
	
	printf("\n%d / %d = %d\n", a, b, a/b);
	
	system("pause");
	return 0;
}
