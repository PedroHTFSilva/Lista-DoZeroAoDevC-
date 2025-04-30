#include <iostream>

int main() {
    int vet[10];
    int maior, menor;

    int i = 0;
    
    // Solicita o primeiro valor antes do loop
    printf("Insira o %i valor: ", i + 1);
    scanf("%i", &vet[i]);

   
    // Inicializa 'maior' e 'menor' com o primeiro valor inserido
    maior = vet[i];
    menor = vet[i];

    i++;

    while (i < 10) {
        printf("Insira o %i valor: ", i + 1);
        scanf("%i", &vet[i]);

        if (maior < vet[i]) {
            maior = vet[i];
        } else if (menor > vet[i]) {
            menor = vet[i];
        }

        i++;
    }

    printf("\nO menor valor é: %i\n", menor);

    return 0;
}

