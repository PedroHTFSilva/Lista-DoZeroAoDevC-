#include <iostream>

int main() {
    int vet[10];
    int aux;

    int i = 0;
    do {
        printf("Insira o %i valor: ", i + 1);
        scanf("%i", &vet[i]);
        i++;
    } while (i < 10);

    i = 0;
    do {
        int j = 0;
        do {
            if (vet[i] > vet[j]) {
                // Troca os elementos se estiverem fora de ordem
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
            j++;
        } while (j < 10);
        i++;
    } while (i < 10);

    printf("Os valores informados em ordem decrescente:\n");
    for (int k = 0; k < 10; k++) {
        printf("%i\n", vet[k]);
    }

    return 0;
}

