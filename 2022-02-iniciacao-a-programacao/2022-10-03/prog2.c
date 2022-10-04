#include<stdio.h>    //biblioteca saida de dados
#include<math.h>     //biblioteca matematica
#include<stdlib.h>   //biblioteca padrao

int main () {       //função principal

    int k;              //variavel de contador
    int n=63;           //limite final do contador

    for(k=1; k < n; k++)
        printf("\nContador=%d\n",k);   //se for um unico comando dentro de for, não precisa abrir e fechar chaves
}
