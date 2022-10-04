#include<stdio.h>

int main() {
    int i, idade, opcao, somaIdadeOtimo = 0, countRegular = 0, countBom = 0;

    printf("Pesquisa de opiniao: 1- regular, 2- bom, 3- otimo\n\n");

    for(i = 0; i < 3; i++) {
        pesquisa:
            printf("--- Espectador No %d ---\n", i + 1);

            printf("Idade: ");
            scanf("%d", &idade);

            printf("Digite a opiniao: ");
            scanf("%d", &opcao);

            switch(opcao) {
                case 1:
                    countRegular++;
                    break;
                case 2:
                    countBom++;
                    break;
                case 3:
                    somaIdadeOtimo += idade;
                    break;
            }
    }

    float mediaOtimo = somaIdadeOtimo / (15 - countBom - countRegular);
    float porcBom = countBom / 15;

    printf("Media das idades que responderam otimo: %f\n", mediaOtimo);
    printf("Quantidade de espectadores regular: %d", countRegular);
    printf("Quantidade de espectadores regular: %f", porcBom);
}
