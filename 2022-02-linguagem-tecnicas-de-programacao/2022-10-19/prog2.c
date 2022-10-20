#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char frase[255], criptografada[255];
    int i, chave;

    printf("Frase/palavra a ser criptografada: ");
    fgets(frase, 255, stdin);

    printf("Chave da criptografia: ");
    scanf("%d", &chave);

    for (i = 0; frase[i] != '\0'; i++) {
        char auxiliar = frase[i] + chave;
        if (auxiliar > 122)
            auxiliar -= 26;
        else if (auxiliar < 97)
            auxiliar += 26;

        criptografada[i] = auxiliar;
    }

    criptografada[strlen(frase)] = '\0';

    fputs(criptografada, stdout);
    printf("\n");

    system("pause");
    return 0;
}
