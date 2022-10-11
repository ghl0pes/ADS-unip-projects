#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    /*
        Programa que faz o calculo de desvio padrão
        de determinados valores em um array.
    */

    int vetor[5] = {12, 5, 11, 6, 4};
    int i, n = 5;
    float media, soma = 0, somatorio = 0, desvioPadrao;

    for (i = 0; i < n; i++)
        soma += vetor[i];

    media = soma / n;

    printf("Valor da media = %f\n", media);

    for (i = 0; i < n; i++)
        somatorio += pow(vetor[1] - media, 2);

    desvioPadrao = sqrt(somatorio / (n - 1));
    printf("Desvio padrao = %f\n", desvioPadrao);

    system("pause");
    return 0;
}
