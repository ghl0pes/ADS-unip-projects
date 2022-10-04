#include<stdio.h>

int main() {
    int i;
    float storeV = 0, storeP = 0, value, parcelas;
    char opt;

    for (i = 0; i < 5; i++) {
        compra: printf("\n--- COMPRA No %d ---\n", i + 1);
                printf("\nMetodo de pagamento: ");
                opt = getchar();

        printf("\nValor da compra: ");
        scanf("%f", &value);

        if(opt == 'p' || opt == 'P'){
            storeP += value;
        } else if (opt == 'v' || opt == 'V') {
            storeV += value;
            parcelas = value / 3;
        } else {
            printf("\nMetodo nao aceito!\n");
            goto compra;
        }
        fflush(stdin);
    }

    printf("\nValor das compras a vista: %f\n", storeV);
    printf("Valor das compras a prazo: %f\n", storeP);
    printf("Valor total das compras: %f\n", storeV + storeP);
    printf("Valor total das parcelas: %f\n", parcelas);

    system("pause");
    return 0;
}
