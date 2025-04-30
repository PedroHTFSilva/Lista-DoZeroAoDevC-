#include <stdio.h>

void receberNome(char nome[50]);
void exibirComNumerosEntreLetras(const char nome[50]);

int main() {
    char nome[50];

    receberNome(nome);
    exibirComNumerosEntreLetras(nome);

    return 0;
}

void receberNome(char nome[50]) {
    printf("Digite um nome: ");
    scanf("%s", nome);
}

void exibirComNumerosEntreLetras(const char nome[50]) {
    for (int i = 0; nome[i] != '\0'; i++) {
        printf("%c1", nome[i]);
    }
    printf("\n");
}

