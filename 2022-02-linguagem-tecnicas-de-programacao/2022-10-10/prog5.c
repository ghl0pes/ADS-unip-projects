#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    /*
        Montagem de matriz com leitura de dados. Scanf dentro dos loops.
    */

    int matriz[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite o elemento [%d, %d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d, %d]: %d\n", i, j, matriz[i][j]);
        }
    }

    system("pause");
    return 0;
}



