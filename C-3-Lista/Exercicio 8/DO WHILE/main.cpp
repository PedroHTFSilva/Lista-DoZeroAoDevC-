#include <iostream>

int main() {
    float vet[10];
    float aux;
    int i = 0;

    // Entrada dos valores
    do {
        printf("Insira o %i valor: ", i + 1);
        scanf("%f", &vet[i]);
        i++;
    } while (i < 10);

    // Ordenação em ordem crescente usando o algoritmo de ordenação de bolha (Bubble Sort)
    i = 0;
    do {
        int j = 0;
        do {
            if (vet[j] > vet[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
            j++;
        } while (j < 10 - 1);
        i++;
    } while (i < 10);

    // Exibição dos valores ordenados em ordem crescente
    printf("Os valores informados em ordem crescente:\n");
    i = 0;
    do {
        printf("%f\n", vet[i]);
        i++;
    } while (i < 10);

    // Ordenação em ordem decrescente usando o mesmo algoritmo de ordenação de bolha (Bubble Sort)
    i = 0;
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
    printf("\nOs valores informados em ordem decrescente:\n");
    i = 0;
    do {
        printf("%f\n", vet[i]);
        i++;
    } while (i < 10);

    return 0;
}

