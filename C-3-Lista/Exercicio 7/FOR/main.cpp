#include <iostream>

int main() {
    int vet[10];
    int aux;

    // Entrada dos valores
    for (int i = 0; i < 10; i++) {
        printf("Insira o %i valor: ", i + 1);
        scanf("%i", &vet[i]);
    }

    // Ordenação usando o algoritmo de ordenação de bolha (Bubble Sort) em ordem decrescente
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - 1; j++) {
            if (vet[j] < vet[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
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

