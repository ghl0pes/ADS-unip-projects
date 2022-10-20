#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char frase[255];
    int i, contVogais = 0, contPalavras = 0;

    printf("Insira a frase a ser lida: ");
    fgets(frase, 255, stdin);

    for (i = 0; i < strlen(frase); i++) {
        if (
            frase[i] == 'A' || frase[i] == 'a' ||
            frase[i] == 'E' || frase[i] == 'e' ||
            frase[i] == 'I' || frase[i] == 'i' ||
            frase[i] == 'O' || frase[i] == 'o' ||
            frase[i] == 'U' || frase[i] == 'U'
        )
            contVogais++;
        else if (frase[i] == ' ')
            contPalavras++;
    }

    printf("Quantidade de vogais: %d\n", contVogais);
    printf("Quantidade de palavras: %d\n", contPalavras + 1);


    system("pause");
    return 0;
}
