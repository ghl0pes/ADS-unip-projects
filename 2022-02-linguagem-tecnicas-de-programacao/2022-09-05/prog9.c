#include<stdio.h>
#include<math.h>


int main() {
	/*
		Programa que verifica quando j e i s�o os mesmos valores
		em casos de dois loops simult�neos.
	*/
	
	int i, j;
	
	for (i = 1; i <= 10; i++) {
		for (j = 10; j >= 1; j--) {
			i == j ? printf("1\n") : printf("0\n");
		}
	}
	
	system("pause");
	return 0;
}
