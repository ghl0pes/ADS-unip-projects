#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char nome[50];
    char nome2[50];

    printf("Digite seu nome completo: ");
    fgets(nome, 50, stdin);
    printf("Nome digitado pelo fgets: %s\n\n", nome);

    printf("Digite novamente seu nome completo: ");
    scanf("%s", nome2);
    printf("Nome digitado pelo scanf: %s\n", nome2);

    system("pause");
    return 0;
}
