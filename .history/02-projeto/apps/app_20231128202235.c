// 01. Gere aleatoriamente um vetor de ordem N com números no intervalo fechado entre A e B:
// a) Coloque os números de fibonacci do vetor em outro vetor e ordene este vetor pelo metodo do bolha.
// b) Ordene apenas as posições pares do vetor.
// c) Ordene pelo método da seleção apenas números ímpares.

#include <stdio.h>
#include <stdlib.h>

#include "gerar_vetor_aleatorio.h"
#include "imprimir_vetor.h"

int main()
{
  int N, A, B;

  printf("Informe a ordem N do vetor: ");
  scanf("%d", &N);

  printf("Informe os valores A e B (intervalo fechado): ");
  scanf("%d %d", &A, &B);

  int vetor[N], vetorFibonacci[N];

  gerarVetorAleatorio(vetor, N, A, B);

  printf("Vetor original: ");
  imprimirVetor(vetor, N);

  return 0;
}