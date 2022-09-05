#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int a, b, c;
	float x, y, z;
	float c1, c2, c3, c4, c5, c6;
	
	printf("Digite 3 numeros inteiros: \n");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("\nDigite 3 numeros reais: \n");
	scanf("%f %f %f", &x, &y, &z);
	
	c1 = a * pow(x, 4) - (exp(b / y)) * cos(c - z);
	printf("\nResultado c1: %f\n", c1);
	
	c2 = sqrt(pow(a, 3)) - (tan(z / x) / log(a + b));
	printf("\nResultado c2: %f\n", c2);
	
	c3 = exp((pow(a, 2) / x) * -1) + pow(x * y, 1/7) - sin(b / c);
	printf("\nResultado c3: %f\n", c3);
	
	c4 = (acos(a / b)) * (pow((z * c) / (x * y), 1/3));
	printf("\nResultado c4: %f\n", c4);
	
	c5 = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
	printf("\nResultado c5: %f\n", c5);
	
	c6 = (pow(x * y, 2 / 3)) - ((atan(a / c) * log(x / y)) / pow(pow(x, 2) - pow(y, 2) + pow(x, 2), 1 / 4));
	printf("\nResultado c6: %f\n", c6);
	
	system("pause");
	return 0;
}
