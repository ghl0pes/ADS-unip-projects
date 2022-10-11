#include<stdio.h>
#include<math.h>

int main () {
    /*
        Programa que faz o calculo de desvio padrão 
        de determinados valores em um array.
    */
    
    float numeros[10] = {1.34, 1.33, 1.34, 1.32, 1.33, 1.32, 1.31, 1.32, 1.33, 1.34};
    float media, acumulador, somatorio, desvioPadrao;
    int i, n = 10;

    for (i = 0; i < n; i++)
        acumulador += numeros[i];
    media = acumulador / n;

    for(i = 0; i < n; i++)
        somatorio = somatorio + pow((numeros[i] - media), 2);
    
    desvioPadrao = sqrt(somatorio / (n - 1);
    
    printf("Desvio padrao do array: %f", desvioPadrao);
}
