#include <iostream>

int main() {
    int vet[10];
    int aux;

    // Entrada dos valores
    for (int i = 0; i < 10; i++) {
        printf("Insira o %i valor: ", i + 1);
        scanf("%i", &vet[i]);
    }

    // Ordenação usando o algoritmo de ordenação de bolha (Bubble Sort)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (vet[i] > vet[j]) {
                
				// Troca os elementos se estiverem fora de ordem
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    // Exibição dos valores ordenados em ordem decrescente
    printf("Os valores informados em ordem decrescente:\n");
    for (int k = 0; k < 10; k++) {
        printf("%i\n", vet[k]);
    }

    return 0;
}

