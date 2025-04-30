#include <cstdio>
#include <stdio.h>
#include <string>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Usando um array de caracteres para armazenar a string
	char nome[50]; 

    printf("Informe o seu nome: ");
    // Especificando o tamanho máximo para evitar estouro de buffer
    scanf("%99s", nome); 

    printf("Caracteres do nome:\n");
    for (int i = 0; nome[i] != '\0'; ++i) {
        printf("%c\n", nome[i]);
    }

    return 0;
}

