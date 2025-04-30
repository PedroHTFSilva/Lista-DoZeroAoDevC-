#include <iostream>
#include <string>

int main() {
    int vet[10];
    int maior;

    int i = 0;
    while (i < 10) {
        printf("Insira o %i valor: ", i + 1);
        scanf("%i", &vet[i]);

        if (i == 0 || maior < vet[i]) {
            maior = vet[i];
        }

        i++;
    }

    printf("\nO maior valor é: %i\n", maior);

    return 0;
}

