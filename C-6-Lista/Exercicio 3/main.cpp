#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
    // Vari�vel para armazenar o n�mero inserido pelo usu�rio
    float numero;

    // Solicita ao usu�rio inserir um n�mero
    printf("Digite um n�mero: ");
    scanf("%f", &numero);

    // Cria um ponteiro que aponta para a vari�vel numero
    float *prtnumero = &numero;

    // Modifica o valor inserido pelo usu�rio
    *prtnumero *= 2;

    // Exibe o endere�o de mem�ria e o valor modificado
    printf("O valor modificado �: %.2f\n", *prtnumero);

    return 0;
}

