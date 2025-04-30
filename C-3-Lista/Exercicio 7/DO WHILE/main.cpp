#include <iostream>

int main() {
    int vet[10];
    int aux;
    int i = 0;

    // Entrada dos valores
    do {
        printf("Insira o %i valor: ", i + 1);
        scanf("%i", &vet[i]);
        i++;
    } while (i < 10);

    i = 0;

    // Ordenação usando o algoritmo de ordenação de bolha (Bubble Sort) em ordem decrescente
    do {
        int j = 0;
        do {
            if (vet[j] < vet[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
            j++;
        } while (j < 10 - 1);
        i++;
    } while (i < 10);

    // Exibição dos valores ordenados em ordem decrescente
    printf("Os valores informados em ordem decrescente:\n");
    i = 0;
    do {
        printf("%i\n", vet[i]);
        i++;
    } while (i < 10);

    return 0;
}

