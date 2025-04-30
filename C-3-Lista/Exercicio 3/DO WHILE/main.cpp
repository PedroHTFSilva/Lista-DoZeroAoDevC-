#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char nome[10];
	int nota[4];
	int media;
	
	printf("CALCULO DE MEDIA");
	
	printf("\nInforme seu nome:");
	scanf("%s", &nome);
	
	
	int i = 0;
	do
	{
		printf("\nInforme a sua %i nota:", i+1);
		scanf("%i", &nota[i]);
		i++;	
	}while (i<4);
	
	media = (nota[0] + nota[1] + nota[2] + nota[3])/4;
		
	// VALIDAÇÃO DE MEDIA
	if (media<5)
	{
		printf("\nAluno reprovado:%s", nome);
		printf("\nSua nota:%i", media);
	}
	else
	{
		printf("\nAluno aprovado:%s", nome);
		printf("\nSua nota:%i", media);
	}
	return 0;
}

