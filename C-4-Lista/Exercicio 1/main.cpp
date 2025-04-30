#include <stdio.h>

float Media(float notas[4]) {
  float media = 0;
  
  media = ((notas[0] + notas[1] + notas[2] + notas[3])/4);
  
  return media;
}

void RecebeNome(char nome[50]) {
  printf("Informe seu nome: ");
  scanf("%s", nome);
}

void RecebeIdade(int* idade) {
  printf("Informe sua idade: ");
  scanf("%d", idade);
}

void RecebeDataNasci(char data_nascimento[11]) {
  printf("Data de Nascimento (dd/mm/aaaa): ");
  scanf("%s", data_nascimento);
}

void RecebeNota(float notas[4]) {
  for (int i = 0; i < 4; i++) {
    printf("Nota %d: ", i + 1);
    scanf("%f", &notas[i]);
  }
}

int main() {
  char nome[50];
  int idade;
  char data_nascimento[11];
  float notas[4];

  // Recebimento dos dados do aluno
  RecebeNome(nome);
  RecebeIdade(&idade);
  RecebeDataNasci(data_nascimento);
  RecebeNota(notas);

  // Cálculo da média
  float media = Media(notas);

  // Exibição dos dados do aluno
  printf("\nNome: %s\n", nome);
  printf("Idade: %d\n", idade);
  printf("Data de Nascimento: %s\n", data_nascimento);
  printf("Notas: ");
  for (float nota : notas) {
    printf("%.2f ", nota);
  }
  printf("\n");

  // Exibição da média e da mensagem de aprovação/reprovação
  printf("Média: %.2f\n", media);
  if (media >= 5) {
    printf("Aprovado!\n");
  } else {
    printf("Reprovado!\n");
  }

  return 0;
}

