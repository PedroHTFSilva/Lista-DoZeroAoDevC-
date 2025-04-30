#include <iostream>
#include <stdio.h>
#include <string>

int main(int argc, char** argv) {
	
	int nota[4];
	int media;
	
	
	 setlocale(LC_ALL, "Portuguese");
	 
	printf("Calculo de media entre 4 valores");
	
	
	for(int i = 0;i<4;i++)
	{
		printf("\nDigite o %i valor", i+1);
		scanf("%i", &nota[i]);
	}
	
	media =(nota[0] + nota[1] + nota[2] + nota[3])/4;
	
	printf("\n Media dos valores é: %d", media);
	
	return 0;
}
