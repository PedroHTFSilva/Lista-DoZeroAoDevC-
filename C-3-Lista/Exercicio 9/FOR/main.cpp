#include <iostream>

int main() {
    int tamanho = 10;
    int vet[tamanho];

    // Entrada dos valores
    for (int i = 0; i < tamanho; i++) {
        printf("Insira o %i valor: ", i + 1);
        scanf("%i", &vet[i]);
    }

    // Exibi��o dos n�meros pares
    printf("N�meros pares:\n");
    for (int i = 0; i < tamanho; i++) {
        if (vet[i] % 2 == 0) {
            printf("%i\n", vet[i]);
        }
    }

    return 0;
}

