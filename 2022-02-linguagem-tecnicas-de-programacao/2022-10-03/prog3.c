#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main () {
	/*
		Revisão: atribuições dentro de um for loop
	*/
	
	int kont=0;
	int j;
	
	for(j=1; j<=10; j++){
		kont=kont+j;
		
		printf("\n kont=%d \n", kont);
		
		printf("\n j=%d \n", j);
   }
}
