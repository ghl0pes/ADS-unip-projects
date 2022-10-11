#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

    /*
        Mais um exemplo de soma com loop
    */

    int matriz[4][4];
    int matriz1[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int matriz2[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    int i, j;
    for (i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            matriz[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("O elemento matriz[%d, %d] = %d\n", i, j, matriz[i][j]);
        }
    }

    system("pause");
    return 0;
}


