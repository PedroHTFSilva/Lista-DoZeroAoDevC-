#include <stdio.h>

// Função recursiva para multiplicar dois números e adicionar 1 até a soma ser 100
void multiplicarEAdicionarUm(int num1, int num2, int resultado) {
    // Multiplica os números
    resultado = num1 * num2;

    // Verifica se o resultado é maior ou igual a 100
    if (resultado >= 100) {
        printf("Resultado: %d\n", resultado);
        return; // Encerra a recursão
    }

    // Adiciona 1 ao resultado e chama recursivamente a função
    multiplicarEAdicionarUm(num1, num2, resultado + 1);
}

int main() {
    int num1, num2;

    // Solicita ao usuário os dois números inteiros
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    // Chama a função inicialmente com o resultado igual a 0
    multiplicarEAdicionarUm(num1, num2, 0);

    return 0;
}

