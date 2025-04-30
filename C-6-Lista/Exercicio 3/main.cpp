#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
    // Variável para armazenar o número inserido pelo usuário
    float numero;

    // Solicita ao usuário inserir um número
    printf("Digite um número: ");
    scanf("%f", &numero);

    // Cria um ponteiro que aponta para a variável numero
    float *prtnumero = &numero;

    // Modifica o valor inserido pelo usuário
    *prtnumero *= 2;

    // Exibe o endereço de memória e o valor modificado
    printf("O valor modificado é: %.2f\n", *prtnumero);

    return 0;
}

