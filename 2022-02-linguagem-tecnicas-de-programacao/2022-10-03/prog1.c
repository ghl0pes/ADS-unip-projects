#include<stdio.h>    //biblioteca saida de dados
#include<math.h>     //biblioteca matematica
#include<stdlib.h>   //biblioteca padrao

int main () {       //função principal

	int x1, y1, x2, y2; //variaveis inteiras
	float a, b;         //variaveis reais
	
	printf("\nDigite dois pares de pontos\n");
	printf("\nNa ordem: (x1, y1) e (x2, y2)\n"); //comando de escrita
	
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);      //comando de leitura
	
	a=(y2-y1)/(x2-x1);                          //coeficiente angular
	b=y1-(a*x1);                                //coeficiente linear
	
	printf("\n O coeficiente angular a=%f\n",a);
	printf("\n O coeficiente linear b=%f\n",b);
	
	printf("\n A equação reta eh do tipo y(x)=%fx+%f\n",a,b);
	
	system("pause");
	return 0;

}
