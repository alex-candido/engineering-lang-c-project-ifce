// 01. Gere aleatoriamente um vetor de ordem N com números no intervalo fechado entre A e B:
// a) Coloque os números de fibonacci do vetor em outro vetor e ordene este vetor pelo metodo do bolha.
// b) Ordene apenas as posições pares do vetor.
// c) Ordene pelo método da seleção apenas números ímpares.

#include <stdio.h>
#include <stdlib.h>
#include "services.h"

int main()
{
  int N, A, B;
  char descricao[100];

  printf("Digite uma descricao: ");
  scanf("%[^\n]", descricao);

  imprimirMensagem(descricao);

  return 0;
}
