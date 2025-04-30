#include <iostream>

int main(int argc, char** argv)
{
	int vet[10];
	int maior, menor;
	
	for(int i = 0;i<10;i++)
{
		printf("Insira o %i valor:",i+1);
		scanf("%i", &vet[i]);	
	
	if(maior<vet[i])
	{
		maior=vet[i];
	}
}


	printf("\nO maior valor e:%i", maior);

	return 0;
}

	
	
	
	

