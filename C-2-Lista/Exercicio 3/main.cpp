#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	char variavel;
	int valor;
	
	printf("SOFTWARE IMPAR OU PAR:");
	
	printf("\nInsira um numero inteiro:");
	scanf("%i", &valor);
	
	if(valor%2==0)
	{
	printf("PAR");
	}
	
	else
	{
	printf("IMPAR");
	}
	
	
	return 0;
}

