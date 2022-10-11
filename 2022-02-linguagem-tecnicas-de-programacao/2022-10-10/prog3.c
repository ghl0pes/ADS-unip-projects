#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    /* Tr�s exemplos de declara��o de matrizes */
    int matriz[2][2];
    int matriz1[2][2] = {1, 2, 3, 4};
    int matriz2[2][2] = {{1, 2}, {3, 4}};

    /* Exerc�cio de soma das matrizes */

    /* Soma de maneira manual, selecionando os �ndices
        --- Para rodar, s� tirar os coment�rios ---
    */

    /*
    matriz[0][0] = matriz1[0][0] + matriz2[0][0];
    matriz[0][1] = matriz1[0][1] + matriz2[0][1];
    matriz[1][0] = matriz1[1][0] + matriz2[1][0];
    matriz[1][1] = matriz1[1][1] + matriz2[1][1];


    printf("O elemento matriz[%d, %d] = %d", 0, 0, matriz[0][0]);
    printf("\nO elemento matriz[%d, %d] = %d", 0, 1, matriz[0][1]);
    printf("\nO elemento matriz[%d, %d] = %d", 1, 0, matriz[1][0]);
    printf("\nO elemento matriz[%d, %d] = %d", 1, 1, matriz[1][1]);

    */

    /*
        Soma com um loop -
        implementa��o com dois for, j� que a matriz � bidimensional
    */

    int i, j;
    for (i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            matriz[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("O elemento matriz[%d, %d] = %d\n", i, j, matriz[i][j]);
        }
    }

    system("pause");
    return 0;
}

