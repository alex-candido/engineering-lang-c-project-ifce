#include <stdio.h>
#include <stdlib.h>
#include "gerar_vetor_aleatorio.h"

void gerarVetorAleatorio(int vetor[], int N, int A, int B)
{
  for (int i = 0; i < N; i++)
  {
    vetor[i] = rand() % (B - A + 1) + A;
  }
}