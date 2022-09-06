#include<stdio.h>

int main() {
	int main, i, fat;
	
	printf("Digite um numero para calcular fatorial: ");
	scanf("%d", &main);
	
	fat = 1;
	for (i = 1; i <= main; i++) {
		fat = fat * i;
	}
	
	printf("%d! = %d\n", main,  fat);
	
	system("pause");
	return 0;
}
