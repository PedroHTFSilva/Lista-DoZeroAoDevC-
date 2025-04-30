#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função recursiva para contar os dígitos de um número
int contarDigitos(int numero) {
    if (numero == 0) // Condição de parada da recursão
        return 0;
    else
        return 1 + contarDigitos(numero / 10); // Chamada recursiva para o próximo dígito
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int numero;

    // Solicita ao usuário um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Calcula e exibe o número de dígitos do número informado
    printf("O número de dígitos de %d é: %d\n", numero, contarDigitos(numero));

    return 0;
}

