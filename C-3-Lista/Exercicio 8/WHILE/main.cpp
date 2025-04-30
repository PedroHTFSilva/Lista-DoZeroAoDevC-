#include <iostream>

int main() {
    float vet[10];
    float aux;
    int i = 0;

    // Entrada dos valores
    while (i < 10) {
        printf("Insira o %i valor: ", i + 1);
        scanf("%f", &vet[i]);
        i++;
    }

    // Ordenação em ordem crescente usando o algoritmo de ordenação de bolha (Bubble Sort)
    i = 0;
    while (i < 10) {
        int j = 0;
        while (j < 10 - 1) {
            if (vet[j] > vet[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
            j++;
        }
        i++;
    }

    // Exibição dos valores ordenados em ordem crescente
    printf("Os valores informados em ordem crescente:\n");
    i = 0;
    while (i < 10) {
        printf("%f\n", vet[i]);
        i++;
    }

    // Ordenação em ordem decrescente usando o mesmo algoritmo de ordenação de bolha (Bubble Sort)
    i = 0;
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
    printf("\nOs valores informados em ordem decrescente:\n");
    i = 0;
    while (i < 10) {
        printf("%f\n", vet[i]);
        i++;
    }

    return 0;
}

