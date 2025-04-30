#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função recursiva para calcular o n-ésimo termo da sequência de Fibonacci
int fibonacci(int n) {
    if (n <= 1) // Condição de parada da recursão
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Chamadas recursivas para os dois termos anteriores
}

int main() {
    int n;
    setlocale(LC_ALL, "Portuguese");

    // Solicita ao usuário o valor de N
    printf("Digite um número inteiro positivo para calcular a sequência de Fibonacci: ");
    scanf("%d", &n);

    // Verifica se o valor inserido pelo usuário é válido
    if (n < 0) {
        printf("O número deve ser um inteiro positivo.\n");
        return 1; // Retorna 1 para indicar um erro
    }

    // Calcula e imprime os n primeiros termos da sequência de Fibonacci
    printf("Sequência de Fibonacci para n = %d:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

