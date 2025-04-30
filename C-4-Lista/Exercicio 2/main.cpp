#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int PedirNumeros(int numeros[10]);
int Media(int numeros[10]);
int MenorNumero(int numeros[10]);
int MaiorNumero(int numeros[10]);

int main(int argc, char** argv) {
    
    int numeros[10];
    
    printf("Bem vindo ao Software de Numeros\n");
    
    PedirNumeros(numeros);
    
    Media(numeros);
    
    MenorNumero(numeros);
    
    MaiorNumero(numeros);
    
    return 0;
}

int PedirNumeros(int numeros[10]) {
    for (int i = 0; i < 10; i++) {
        printf("Insira o %i valor:", i + 1);
        scanf("%i", &numeros[i]);
    }
    return *numeros;
}

int Media(int numeros[10]) {
    int media = 0;
    for (int i = 0; i < 10; i++) {
        media += numeros[i];
    }
    media /= 10;
    
    printf("A media e: %i\n", media);
    
    return media;
}

int MenorNumero(int numeros[10]) {
    int menor = numeros[0];
    
    for (int i = 1; i < 10; i++) {
        if (menor > numeros[i]) {
            menor = numeros[i];
        }
    }
    
    printf("O menor valor e: %i\n", menor);
    
    return menor;
}

int MaiorNumero(int numeros[10]) {
    int maior = numeros[0];
    
    for (int i = 1; i < 10; i++) {
        if (maior < numeros[i]) {
            maior = numeros[i];
        }
    }
    
    printf("O maior valor e: %i\n", maior);
    
    return maior;
}

