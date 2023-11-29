#include <stdio.h>
#include <stdlib.h>

#include "classificar_posicoes_impares.h"

void classificar_posicoes_impares(int vetor[], int N)
{
  for (int i = 0; i < N - 1; i++)
  {
    // Encontrar o índice do menor elemento entre i e N
    int indiceMenor = i;
    for (int j = i + 1; j < N; j++)
    {
      if (vetor[j] % 2 != 0 && vetor[j] < vetor[indiceMenor])
      {
        indiceMenor = j;
      }
    }

    // Troca os elementos se o menor for diferente do atual
    if (indiceMenor != i)
    {
      int temp = vetor[i];
      vetor[i] = vetor[indiceMenor];
      vetor[indiceMenor] = temp;
    }
  }
}