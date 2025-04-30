#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int maior, menor, numero[4];


	for(int i = 0;i<4;i++)
	{
	printf("Insira o %i numero:",i+1);
	scanf("%i",&numero[i]);
	}
	
	if(numero[0]>numero[1])
	{
		maior = numero[0];
	}
	
	else
	{
		maior = numero[1];
	}
	
	if(numero[2]>maior)
	{
		maior=numero[2];
	}
	
	if(numero[3]>maior)
	{
		maior=numero[3];
	}
	
	
	printf("O maior valor e:%i",maior);
	
	
	
	return 0;
}

