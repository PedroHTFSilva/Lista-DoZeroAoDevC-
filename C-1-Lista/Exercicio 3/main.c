#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Bem vindo ao Software de Subtra��o!");
	printf("\n Informe o primeiro n�mero:");
	scanf("%i", &num1);
	
	printf("\n Informe o segundo n�mero:");
	scanf("%i", &num2);
	
	result = num1 - num2;
	
	printf("\n O resultado da subtra��o �:%i",result);

	
	
}
