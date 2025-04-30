#include <iostream>

int main() {
    int tamanho = 10;
    int vet[tamanho];

    // Entrada dos valores
    int i = 0;
    while (i < tamanho) {
        printf("Insira o %i valor: ", i + 1);
        scanf("%i", &vet[i]);
        i++;
    }

    // Exibição dos números pares
    printf("Números pares:\n");
    int j = 0;
    while (j < tamanho) {
        if (vet[j] % 2 == 0) {
            printf("%i\n", vet[j]);
        }
        j++;
    }

    return 0;
}

