#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    printf("--- Gabarito de provas ---\n\n");

    printf("Insira o gabarito da prova: ");

    char gabarito[6], respostaAluno[6];
    int i, j, notasAlunos[10], contPassaram = 0;

    fgets(gabarito, 6, stdin);

    printf("\n\n--- Respostas ---\n\n");
    for(i = 0; i < 10; i++) {
        int contNota = 0;
        printf("Respostas do aluno %d: ", i + 1);
        scanf("%s", respostaAluno);

        for(j = 0; respostaAluno[j] != '\0'; j++)
            if(respostaAluno[j] == gabarito[j]) contNota += 2;
        notasAlunos[i] = contNota;
    }

    printf("\n--- Notas ---\n");
    for (i = 0; i < 10; i++) {
        printf("Nota do aluno %d: %d\n", i + 1, notasAlunos[i]);
        if(notasAlunos[i] > 5) contPassaram++;
    }

    printf("%d alunos tiraram mais que 5.\n", contPassaram);

    system("pause");
    return 0;
}
