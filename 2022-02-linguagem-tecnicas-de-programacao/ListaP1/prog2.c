#include<stdio.h>

int main() {
    int i, count = 0, idade;

    printf("--- Digite a idade de 10 pessoas: ---\n");
    for(i = 0; i < 10; i++) {
        printf("Idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        if(idade >= 18) {
            count++;
        }
    }

    printf("%d maiores de 18 anos", count);
}
