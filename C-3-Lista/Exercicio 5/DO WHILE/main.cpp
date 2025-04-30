#include <iostream>
#include <string>

int main() {
    int vet[10];
    int maior, menor;

    int i = 0;

    do {
        printf("Insira o %i valor: ", i + 1);
        scanf("%i", &vet[i]);
	 
	 // Inicializa 'maior' e 'menor' com o primeiro valor inserido
        if (i == 0) {
            maior = menor = vet[i]; 
        } else {
            if (maior < vet[i]) {
                maior = vet[i];
            } else if (menor > vet[i]) {
                menor = vet[i];
            }
        }

        i++;
    } while (i < 10);

    printf("\nO menor valor é: %i\n", menor);

    return 0;
}

