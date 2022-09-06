#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int a, b, control = 0;
	
	printf("Digite um numero para calcular a tabuada: ");
	scanf("%d", &a);
	
	printf("Ate quantas vezes deseja calcular? ");
	scanf("%d", &b);
	
	while (b > control) {
		control++;
		printf("%d x %d = %d\n", a, control, a * control);
	}
	
	system("pause");
	return 0;
}
