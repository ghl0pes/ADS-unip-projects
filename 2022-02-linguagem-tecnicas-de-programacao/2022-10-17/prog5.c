#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char texto[4];
    texto[0] = 'h' - 3;
    texto[1] = 'e' - 32;
    texto[2] = 'x' - 3;

    printf("Texto: %s", texto);
}
