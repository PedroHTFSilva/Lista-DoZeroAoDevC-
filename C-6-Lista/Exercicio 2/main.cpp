#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    // Variáveis para idade, altura e peso
    int idade;
    float altura, peso;

    // Alocando memória para os ponteiros
    int *prtidade = &idade;
    float *prtaltura = &altura;
    float *prtpeso = &peso;

    // Inicializando os valores (idade, altura e peso)
    idade = 10; 
    altura = 140.0; 

    // Exibindo os valores iniciais
    printf("Valores iniciais:\n");
    printf("Idade: %d anos\n", *prtidade);
    printf("Altura: %.2f cm\n", *prtaltura);
    printf("Peso: %.2f kg\n\n", *prtpeso);

    // Modificando os valores de idade, altura e peso 
    *prtidade = 30;
    *prtaltura = 170.0; 
    *prtpeso = 70.0;    

    // Exibindo os valores modificados
    printf("Valores modificados:\n");
    printf("Idade: %d anos\n", *prtidade);
    printf("Altura: %.2f cm\n", *prtaltura);
    printf("Peso: %.2f kg\n", *prtpeso);

    return 0;
}

