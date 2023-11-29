#include <stdio.h>
#include <stdlib.h>

#include "classificar_posicoes_pares.h"

void classificar_posicoes_pares(int vetor[], int n)
{
  // Identificar números pares
  int pares[n]; // Vetor temporário para armazenar os números pares
  int numPares = 0;

  for (int i = 0; i < n; i++)
  {
    if (vetor[i] % 2 == 0)
    {
      pares[numPares] = vetor[i];
      numPares++;
    }
  }

  // Ordenar números pares
  for (int i = 0; i < numPares - 1; i++)
  {
    for (int j = 0; j < numPares - i - 1; j++)
    {
      if (pares[j] > pares[j + 1])
      {
        // Trocar os elementos se estiverem fora de ordem
        int temp = pares[j];
        pares[j] = pares[j + 1];
        pares[j + 1] = temp;
      }
    }
  }

  // Substituir os valores originais pelos valores pares ordenados
  int indicePar = 0;

  for (int i = 0; i < n; i++)
  {
    if (vetor[i] % 2 == 0)
    {
      vetor[i] = pares[indicePar];
      indicePar++;
    }
  }
}
