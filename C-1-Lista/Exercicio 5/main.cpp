#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	

	char nome[15];
	char genero[1];
	int idade;
	float peso;
	float altura;
	
	
	
	printf("Informe a seu nome:");
	scanf("%s", &nome);
	
	printf("Informe a sua idade:");
	scanf("%d", &idade);
	
	printf("Informe a sua altura:");
	scanf("%d", &altura);
	
	printf("Informe a seu genero:");
	scanf("%c", &genero);

	printf("Informe a seu peso:");
	scanf("%f", &peso);
	
	
	
	
	printf("Nome:%s, Idade:%f, Altura: %f, Genero:%c, Peso:%f", nome, idade, altura, genero, peso);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
