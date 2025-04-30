#include <iostream>
#include <stdio.h>
#include <string>

int main(int argc, char** argv) {
	
	int nota[4];
	int media;
	
	
	 setlocale(LC_ALL, "Portuguese");
	 
	printf("Calculo de media entre 4 valores");
	
	int i = 0;
	do
	{
		printf("\nInforme a sua %i nota:", i+1);
		scanf("%i", &nota[i]);
		i++;	
	}while (i<4);
	
		
	media =(nota[0] + nota[1] + nota[2] + nota[3])/4;
	
	printf("\n Media dos valores é: %d", media);
	
	return 0;
}
