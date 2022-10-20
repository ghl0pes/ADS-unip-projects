#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char nome[5] = {'J', 'o', 'a', 'o', '\0'};

    char nome1[5] = "Joao";

    printf("O nome: %s\n", nome);

    printf("A casinha [4] tem o dado %s", nome[4]);

    system("pause");
    return 0;
}
