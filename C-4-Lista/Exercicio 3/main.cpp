#include <iostream>

void AdicionarNumero(int numeros[10]);
void OrdemCrescente(int numeros[10]);
void OrdemDecrescente(int numeros[10]);

int main(int argc, char** argv) {
	
	int numeros[10];
	
	printf("Bem vindo ao Software de organização de numeros\n");
	
	AdicionarNumero(numeros);
	OrdemCrescente(numeros);
	OrdemDecrescente(numeros);
	
	return 0;
}

void OrdemDecrescente(int numeros[10]) {
    int aux;

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (numeros[i] < numeros[j]) {
                // Troca os elementos se estiverem fora de ordem
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    // Exibição dos valores ordenados em ordem decrescente
    printf("Os valores informados em ordem decrescente:\n");
    for (int k = 0; k < 10; k++) {
        printf("%i\n", numeros[k]);
    }
}

void OrdemCrescente(int numeros[10]) {
    int aux;

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (numeros[i] > numeros[j]) {
                // Troca os elementos se estiverem fora de ordem
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    // Exibição dos valores ordenados em ordem crescente
    printf("Os valores informados em ordem crescente:\n");
    for (int k = 0; k < 10; k++) {
        printf("%i\n", numeros[k]);
    }
}

void AdicionarNumero(int numeros[10]) {
    for (int i = 0; i < 10; i++) {
        printf("Insira o %i valor: ", i + 1);
        scanf("%i", &numeros[i]);
    }
}

