// 01. Gere aleatoriamente um vetor de ordem N com números no intervalo fechado entre A e B:
// a) Coloque os números de fibonacci do vetor em outro vetor e ordene este vetor pelo metodo do bolha.
// b) Ordene apenas as posições pares do vetor.
// c) Ordene pelo método da seleção apenas números ímpares.

#include <stdio.h>
#include <stdlib.h>
// #include "funcoes.h"

// Função que exibe uma mensagem no console
void exibirMensagem(const char *mensagem)
{
  printf("A mensagem recebida eh: %s\n", mensagem);
}

// Função principal
int main()
{
  int N, A, B;
  char descricao[100] = "novo";

  // printf("Digite uma descricao: ");
  // scanf("%[^\n]", &descricao); // Lê a descrição até encontrar uma quebra de linha

  exibirMensagem(descricao); // Chama a função exibirMensagem passando a descrição como parâmetro

  return 0;
}
