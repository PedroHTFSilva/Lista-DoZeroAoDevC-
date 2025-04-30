#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o recursiva para contar os d�gitos de um n�mero
int contarDigitos(int numero) {
    if (numero == 0) // Condi��o de parada da recurs�o
        return 0;
    else
        return 1 + contarDigitos(numero / 10); // Chamada recursiva para o pr�ximo d�gito
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int numero;

    // Solicita ao usu�rio um n�mero inteiro
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    // Calcula e exibe o n�mero de d�gitos do n�mero informado
    printf("O n�mero de d�gitos de %d �: %d\n", numero, contarDigitos(numero));

    return 0;
}

