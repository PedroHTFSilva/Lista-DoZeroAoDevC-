#include <cstdio>
#include <stdio.h>
#include <string>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Usando um array de caracteres para armazenar a string
	char nome[50]; 
    
    // Especificando o tamanho m�ximo para evitar estouro de buffer
    printf("Informe o seu nome: ");
    
    // Limitando a leitura para evitar estouro de buffer
    scanf("%49s", nome);

    // Repete at� que um nome v�lido seja fornecido
    while (nome[0] == '\0') {
        printf("Nome inv�lido. Por favor, informe novamente: ");
        scanf("%49s", nome);
    }

    printf("Caracteres do nome:\n");
    for (int i = 0; nome[i] != '\0'; ++i) {
        printf("%c\n", nome[i]);
    }

    return 0;
}

