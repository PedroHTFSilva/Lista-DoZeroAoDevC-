#include <cstdio>
#include <stdio.h>
#include <string>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Usando um array de caracteres para armazenar a string
	char nome[50]; 
    
    // Especificando o tamanho máximo para evitar estouro de buffer
    printf("Informe o seu nome: ");
    
    // Limitando a leitura para evitar estouro de buffer
    scanf("%49s", nome);

    // Repete até que um nome válido seja fornecido
    while (nome[0] == '\0') {
        printf("Nome inválido. Por favor, informe novamente: ");
        scanf("%49s", nome);
    }

    printf("Caracteres do nome:\n");
    for (int i = 0; nome[i] != '\0'; ++i) {
        printf("%c\n", nome[i]);
    }

    return 0;
}

