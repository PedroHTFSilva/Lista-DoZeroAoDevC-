#include <stdio.h>

// Fun��o recursiva para multiplicar dois n�meros e adicionar 1 at� a soma ser 100
void multiplicarEAdicionarUm(int num1, int num2, int resultado) {
    // Multiplica os n�meros
    resultado = num1 * num2;

    // Verifica se o resultado � maior ou igual a 100
    if (resultado >= 100) {
        printf("Resultado: %d\n", resultado);
        return; // Encerra a recurs�o
    }

    // Adiciona 1 ao resultado e chama recursivamente a fun��o
    multiplicarEAdicionarUm(num1, num2, resultado + 1);
}

int main() {
    int num1, num2;

    // Solicita ao usu�rio os dois n�meros inteiros
    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &num2);

    // Chama a fun��o inicialmente com o resultado igual a 0
    multiplicarEAdicionarUm(num1, num2, 0);

    return 0;
}

