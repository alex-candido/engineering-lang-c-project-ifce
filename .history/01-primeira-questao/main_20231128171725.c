// 01. Gere aleatoriamente um vetor de ordem N com números no intervalo fechado entre A e B:
// a) Coloque os números de fibonacci do vetor em outro vetor e ordene este vetor pelo metodo do bolha.
// b) Ordene apenas as posições pares do vetor.
// c) Ordene pelo método da seleção apenas números ímpares.

#include <stdio.h>
#include <stdlib.h>
// #include "funcoes.h"

#include <stdio.h>

// Função que exibe uma mensagem no console
void exibirMensagem(const char *mensagem)
{
  printf("A mensagem recebida é: %s\n", mensagem);
}

// Função principal
int main()
{
  char descricao[100];

  printf("Digite uma descrição: ");
  scanf("%[^\n]", descricao); // Lê a descrição até encontrar uma quebra de linha

  exibirMensagem(descricao); // Chama a função exibirMensagem passando a descrição como parâmetro

  return 0;
}