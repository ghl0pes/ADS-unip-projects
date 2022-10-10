#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main () {
	
	/*
		Exercício da prova: cálculo da equação da reta num gráfico.
	*/

	int x1, y1, x2, y2;
	float a, b;
	
	printf("\nDigite dois pares de pontos\n");
	printf("\nNa ordem: (x1, y1) e (x2, y2)\n");
	
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	
	a = (y2-y1) / (x2-x1);                          //coeficiente angular
	b = y1 - (a * x1);                                //coeficiente linear
	
	printf("\n O coeficiente angular a=%f\n", a);
	printf("\n O coeficiente linear b=%f\n", b);
	
	printf("\n A equação reta eh do tipo y(x)=%fx+%f\n", a, b);
	
	system("pause");
	return 0;

}
