#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char texto[40] = "Hello world!\n";

    fputs(texto, stdout);

    system("pause");
    return 0;
}

