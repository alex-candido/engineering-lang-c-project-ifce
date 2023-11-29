#include <stdio.h>
#include <stdlib.h>

#include "gerar_metodo_bolha.h";

void gerar_metodo_bolha(int vetor[], int N)
{
  for (int i = 0; i < N - 1; i++)
  {
    for (int j = 0; j < N - i - 1; j++)
    {
      if (vetor[j] > vetor[j + 1])
      {
        // Troca os elementos se estiverem fora de ordem
        int temp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = temp;
      }
    }
  }
}