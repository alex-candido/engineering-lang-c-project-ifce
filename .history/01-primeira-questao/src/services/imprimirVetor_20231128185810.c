#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void imprimirVetor(int vetor[], int N)
{
  for (int i = 0; i < N; i++)
  {
    printf("%d", vetor[i]);
  }
}