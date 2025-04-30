#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char escolha;
	
	printf("SOFTWARE DE ESCOLHA:");
	
	printf("\nEscolha 'A' ou 'B':");
	scanf("%c", &escolha);
	
	switch(escolha)
	{
		case 'a':
			printf("Voce escolheu a opcao 'a'");
			break;
			
			
		case 'b':
			printf("Voce escolheu a opcao 'b'");
			break;
			
		case 'A':
			printf("Voce escolheu a opcao 'A'");
			break;
			
			
		case 'B':
			printf("Voce escolheu a opcao 'B'");
			break;
			
		default:
			printf("Opcao invalida");
			break;
	}
	
	
	
	
	
	
	
	
	
	return 0;
}

