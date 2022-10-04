#include<stdio.h>    //biblioteca saida de dados
#include<math.h>     //biblioteca matematica
#include<stdlib.h>   //biblioteca padrao

int main () {       //função principal
	int kont=0;         //zerando o acumulador
	int j;
	
	for(j=1; j<=10; j++){
		kont=kont+j;     //nova atribuição
		
		printf("\n kont=%d \n", kont);
		
		printf("\n j=%d \n", j);
   }
}
