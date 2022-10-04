#include<stdio.h>

int main() {
	int a, b, c;
	
	printf("Insira tres numeros para serem multiplicados: ");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("\n%d * %d * %d = %d\n", a, b, c, a*b*c);
	
	system("pause");
	return 0;
}
