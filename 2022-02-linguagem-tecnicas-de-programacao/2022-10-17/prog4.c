#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char texto[10], reverse[10];
    int i, j;

    printf("Digite uma string para inverter: ");
    fgets(texto, 10, stdin);

    j = strlen(texto);
    reverse[j] = '\0';
    for(i = 0; texto[i] != '\0'; i++) {
        j--;
        reverse[j] = texto[i];
    }

    fputs(reverse, stdout);
}
