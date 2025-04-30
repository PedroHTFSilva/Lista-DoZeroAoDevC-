#include <iostream>
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char** argv) {
	
	
	float numero[5] = {0,0,0,0,0};
	
	float media = 0;
	
	
	printf("Software de multiplicação");
	printf("Insira 5 numeros para calclular:");
	
	int i;
	
	for(i = 0; i < 5; i ++)
	{
		printf("\n Informe o %i numero:", i+1);
		scanf("%f", &numero[i]);
	}
	
	
	
	media = (numero[0] * numero[1] * numero[2] * numero[3] * numero [4]);
	
	
	printf("A multiplicação dos numeros e:%f", media);
	
	
	return 0;
}
