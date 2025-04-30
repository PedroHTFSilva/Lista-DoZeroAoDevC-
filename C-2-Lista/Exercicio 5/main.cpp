#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	float nota[4];
	float media;
	printf("\nSOFTWARE DE CALCULO DE MEDIA");
	printf("\nInforme a sua 1 nota:");
	scanf("%f", &nota[0]);
	
	printf("\nInforme a sua 2 nota:");
	scanf("%f", &nota[1]);
	
	printf("\nInforme a sua 3 nota:");
	scanf("%f", &nota[2]);
	
	printf("\nInforme a sua 4 nota:");
	scanf("%f", &nota[3]);
	
	
	media = (nota[0] + nota[1] + nota[2] + nota[3])/4;
	
	if(media<5)
	{
		printf("REPROVADO!");
	}
	
	else if(media<=6)
	{
		printf("APROVADO PELO CONSELHO!");
	}
	
	else if(media<=9)
	{
		printf("APROVADO!");
	}
	else if(media>9)
	{
		printf("APROVADO");
	}
		printf("\nSua media:%.2f", media);
	return 0;
}

