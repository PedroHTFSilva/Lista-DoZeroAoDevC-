#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o recursiva para calcular o n-�simo termo da sequ�ncia de Fibonacci
int fibonacci(int n) {
    if (n <= 1) // Condi��o de parada da recurs�o
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Chamadas recursivas para os dois termos anteriores
}

int main() {
    int n;
    setlocale(LC_ALL, "Portuguese");

    // Solicita ao usu�rio o valor de N
    printf("Digite um n�mero inteiro positivo para calcular a sequ�ncia de Fibonacci: ");
    scanf("%d", &n);

    // Verifica se o valor inserido pelo usu�rio � v�lido
    if (n < 0) {
        printf("O n�mero deve ser um inteiro positivo.\n");
        return 1; // Retorna 1 para indicar um erro
    }

    // Calcula e imprime os n primeiros termos da sequ�ncia de Fibonacci
    printf("Sequ�ncia de Fibonacci para n = %d:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

