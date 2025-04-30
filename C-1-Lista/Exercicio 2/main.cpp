#include <iostream>	
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>

int main(int argc, char** argv) {
	
	int nota1,nota2,nota3,nota4,media;			
			
	std::setlocale(LC_ALL, "pt_BR.utf8");
	
	printf("Software de Cálculo de media");
	
	printf("\n Informe a primeira nota:");
	scanf("%d", &nota1);
	
	printf("\n Informe a segunda nota:");
	scanf("%d", &nota2);
	
	printf("\n Informe a terceira nota:");
	scanf("%d", &nota3);
	
	printf("\n Informe a quarta nota:");
	scanf("%d", &nota4);
	
	media = (nota1+nota2+nota3+nota4)/4;
	
	printf("\n Media:%i",media);
	
	
}
