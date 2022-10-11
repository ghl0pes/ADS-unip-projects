#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    /*
        Introdução do conteudo de matrizes
    */

    /*Uma maneira de declarar :*/
    int matriz[2][5] = {{3, -1, -7, 23, -89}, {4, -2, 14, 44, 103}};

    /*
        --------------------------
        | 3 | -1 | -7 | 23 | -89 |
        --------------------------
        | 4 | -2 | 14 | 44 | 103 |
        --------------------------
    */

    printf("%d\n", matriz[1][3]);

    /*Outra maneira: */
    int mat[3][4] = {1, 2, 3, 4 ,5 , 6, 7, 8, 9, 10, 11, 12};

    /*  irá pular a linha quando preencher as colunas
        ----------------
        | 1 | 2 | 3 | 4 |
        ----------------
        | 5 | 6 | 7 | 8 |
        ----------------
        | 1 | 2 | 3 | 4 |
        ----------------
    */
    printf("%d", mat[1][3]);

    system("pause");
    return 0;
}
