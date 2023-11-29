#include <stdio.h>
#include <stdlib.h>

#include "imprimir_vetor.h"

void imprimir_vetor(int vetor[], int N)
{
  for (int i = 0; i < N; i++)
  {
    printf("[%d] = %d \n", i, vetor[i]);
  }
}