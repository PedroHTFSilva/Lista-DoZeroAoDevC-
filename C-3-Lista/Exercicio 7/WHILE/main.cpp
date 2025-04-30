#include <iostream>

int main() {
    int vet[10];
    int aux;
    int i = 0;

    // Entrada dos valores
    while (i < 10) {
        printf("Insira o %i valor: ", i + 1);
        scanf("%i", &vet[i]);
        i++;
    }

    i = 0;

    // Ordenação usando o algoritmo de ordenação de bolha (Bubble Sort) em ordem decrescente
    while (i < 10) {
        int j = 0;
        while (j < 10 - 1) {
            if (vet[j] < vet[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
            j++;
        }
        i++;
    }

    // Exibição dos valores ordenados em ordem decrescente
    printf("Os valores informados em ordem decrescente:\n");
    i = 0;
    while (i < 10) {
        printf("%i\n", vet[i]);
        i++;
    }

    return 0;
}

