#include <iostream>

int main() {
    int vet[10];
    int aux;

    // Entrada dos valores
    int i = 0;
    
    while (i < 10) 
	{
        printf("Insira o %i valor: ", i + 1);
        scanf("%i", &vet[i]);
        i++;
    }

    // Ordenação usando o algoritmo de ordenação de bolha (Bubble Sort)
    int i = 0;
    while (i < 10) 
	{
        int j = 0;
        while (j < 10) 
		{
            if (vet[i] > vet[j])
			 {
               
			   
			    // Troca os elementos se estiverem fora de ordem
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
            j++;
        }
        i++;
    }

    // Exibição dos valores ordenados em ordem decrescente
    printf("Os valores informados em ordem decrescente:\n");
    
	int k = 0;
    while (k < 10)
	 {
        printf("%i\n", vet[k]);
        k++;
    }

    return 0;
}

