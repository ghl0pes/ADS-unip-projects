#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int a, b, c;
    float delta, x1, x2;

    printf("Equacao de segundo grau - insira os 3 numeros constantes: ");
    scanf("%d %d %d", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("\n");
    printf("Valor de delta: %f\n", delta);
    if (delta > 0) {
     printf("Valor de x1: %f\n", x1);
     printf("Valor de x2: %f\n", x2);
    } else {
        if(delta == 0) {
            printf("Delta = 0, entao x1 e x2 sao iguais!\n");
            printf("Valor de x1 e x2: %f\n", x1);
        } else {
            printf("Delta negativo, portanto nao tem raiz!\n");
        }
    }
}
