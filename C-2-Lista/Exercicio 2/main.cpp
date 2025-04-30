#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int menor, numero[5];


	for(int i = 0;i<5;i++)
	{
	printf("Insira o %i numero:",i+1);
	scanf("%i",&numero[i]);
	}
	
	if(numero[0]<numero[1])
	{
		menor = numero[0];
	}
	
	else
	{
		menor = numero[1];
	}
	
	if(numero[2]<menor)
	{
		menor=numero[2];
	}
	
	if(numero[3]<menor)
	{
		menor=numero[3];
	}
	
	
	printf("O menor valor e:%i",menor);
	
	
	
	return 0;
}
	

