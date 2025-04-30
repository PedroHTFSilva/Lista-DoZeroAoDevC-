#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char* PedirNome();
int PedirIdade();
char* PedirData();
int PedirNota();
int Calcular(int nota1, int nota2, int nota3, int nota4);

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int nota1, nota2, nota3, nota4;
	char* nome;
	int idade;
	char* DataNascimento;
	int media = 0;
	
	nome = PedirNome();
	idade = PedirIdade();
	DataNascimento = PedirData();		
	nota1 = PedirNota();
	nota2 = PedirNota();
	nota3 = PedirNota();
	nota4 = PedirNota();
	
	media = Calcular(nota1, nota2, nota3, nota4);	
	
	// Verificando se o aluno est� aprovado ou reprovado
    if (media >= 5.0) {
    	
        
    	printf("Nome: %s\n", nome);
    	printf("Idade: %d\n", idade);
    	printf("Data de Nascimento: %s\n", DataNascimento);
    	printf("M�dia: %d\n", media);
    	printf("\nSitua��o: Aprovado\n");
    	
	} else {
    	
        
    	printf("Nome: %s\n", nome);
    	printf("Idade: %d\n", idade);
    	printf("Data de Nascimento: %s\n", DataNascimento);
    	printf("M�dia: %d\n", media);
    	printf("\nSitua��o: Reprovado\n");
    }

	return 0;
}

int PedirNota(){
	
	int nota = 0;

	printf("Informe a sua nota:");
	scanf("%d", &nota);
	
	return nota;
}
	
int Calcular(int nota1, int nota2, int nota3, int nota4){
	
	return (nota1 + nota2 + nota3 + nota4) / 4;
}	
	

char* PedirData(){
	
	char* DataNascimento = (char*)malloc(11 * sizeof(char)); // Alocando espa�o para 11 caracteres (10 para a data e 1 para o terminador nulo '\0')
	
	printf("\nPor favor, informe a sua data de nascimento (formato DD/MM/AAAA):");
	scanf("%s", DataNascimento);
	
	return DataNascimento; // Retorna o ponteiro para a string que cont�m a data de nascimento
	
}
int PedirIdade(){

	int idade = 0;
	
	printf("\nPor favor, informe a sua idade:");
	scanf("%d", &idade);
	
	return idade;
}

char* PedirNome(){
	
	char* nome = (char*)malloc(100 * sizeof(char)); // Alocando espa�o para 100 caracteres
	
	printf("\nPor favor, informe seu nome:");
	scanf("%s", nome);
	
	return nome; // Retorna o ponteiro para a string que cont�m o nome
	
}

