#include <iostream>

int main() {
    int tamanho = 10;
    int vet[tamanho];

    // Entrada dos valores
    int i = 0;
    do {
        printf("Insira o %i valor: ", i + 1);
        scanf("%i", &vet[i]);
        i++;
    } while (i < tamanho);

    // Exibição dos números pares
    printf("Números pares:\n");
    int j = 0;
    do {
        if (vet[j] % 2 != 0) {
            printf("%i\n", vet[j]);
        }
        j++;
    } while (j < tamanho);

    return 0;
}


