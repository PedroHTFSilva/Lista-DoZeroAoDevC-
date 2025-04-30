#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o recursiva para calcular a somat�ria de todos os n�meros de 1 at� n
int somatoria(int n) {
    if (n == 1) // Condi��o de parada da recurs�o
        return 1;
    else
        return n + somatoria(n - 1); // Chamada recursiva para calcular a somat�ria dos n�meros de 1 at� n-1
}

int main() {
    int numero;
    setlocale(LC_ALL, "Portuguese");

    // Solicita ao usu�rio o n�mero para calcular a somat�ria
    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � positivo
    if (numero < 1) {
        printf("O n�mero deve ser um inteiro positivo.\n");
        return 1; // Retorna 1 para indicar um erro
    }

    // Calcula a somat�ria de 1 at� o n�mero informado pelo usu�rio e exibe o resultado
    printf("Somat�ria de 1 at� %d: %d\n", numero, somatoria(numero));

    return 0;
}

