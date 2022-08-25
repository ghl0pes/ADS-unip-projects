#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int n1, resto;

    printf("Digite um numero inteiro e diferente de zero: ");
    scanf("%d", &n1);

    resto = n1 % 2;

    if (resto == 0) {
        printf("O numero %d eh par\n", n1);
    } else {
        printf("O numero %d eh impar\n", n1);
    }

    system("pause");
    return 0;
}
