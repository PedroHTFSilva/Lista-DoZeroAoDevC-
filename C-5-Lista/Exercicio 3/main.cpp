#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função recursiva para calcular a somatória de todos os números de 1 até n
int somatoria(int n) {
    if (n == 1) // Condição de parada da recursão
        return 1;
    else
        return n + somatoria(n - 1); // Chamada recursiva para calcular a somatória dos números de 1 até n-1
}

int main() {
    int numero;
    setlocale(LC_ALL, "Portuguese");

    // Solicita ao usuário o número para calcular a somatória
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero < 1) {
        printf("O número deve ser um inteiro positivo.\n");
        return 1; // Retorna 1 para indicar um erro
    }

    // Calcula a somatória de 1 até o número informado pelo usuário e exibe o resultado
    printf("Somatória de 1 até %d: %d\n", numero, somatoria(numero));

    return 0;
}

