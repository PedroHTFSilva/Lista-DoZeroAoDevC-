#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    char nome[15];
    int nota[4], media;
    int dataNascimento;
    int i = 0;

    printf("Software de Calculo de Media");

    printf("\nInforme o seu Nome:");
    scanf("%s", &nome);

    printf("\nInforme a sua data de nascimento:");
    scanf("%d", &dataNascimento);

    // LOOPING DAS NOTAS
    while (i < 4) {
        printf("\nInforme sua %i nota:", i + 1);
        scanf("%i", &nota[i]);
        i++;
    }

    media = (nota[0] + nota[1] + nota[2] + nota[3]) / 4;

    // VALIDAÇÃO DE MEDIA

    if (media < 5) {
        printf("\nAluno %s: Reprovado", nome);
        printf("\nData de Nascimento:%d", dataNascimento);
        printf("\nSua nota:%i", media);
    } else {
        printf("\nAluno %s: Aprovado", nome);
        printf("\nData de Nascimento:%d", dataNascimento);
        printf("\nSua nota:%i", media);
    }

    return 0;
}

