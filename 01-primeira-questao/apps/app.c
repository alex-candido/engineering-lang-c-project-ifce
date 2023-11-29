// 01. Gere aleatoriamente um vetor de ordem N com números no intervalo fechado entre A e B:
// a) Coloque os números de fibonacci do vetor em outro vetor e ordene este vetor pelo método do bolha.
// b) Ordene apenas as posições pares do vetor.
// c) Ordene pelo método da seleção apenas números ímpares.

#include <stdio.h>
#include <stdlib.h>

#include "gerar_vetor_aleatorio.h"
#include "imprimir_vetor.h"
#include "gerar_fibonacci.h"
#include "gerar_metodo_bolha.h"
#include "classificar_posicoes_pares.h"
#include "classificar_posicoes_impares.h"

int main()
{
  int N, A, B;

  printf("Informe a tamanho N do vetor: ");
  scanf("%d", &N);

  printf("Informe os valores A e B (intervalo fechado): \n");
  scanf("%d %d", &A, &B);

  int vetor[N];

  // Parte a)
  gerar_vetor_aleatorio(vetor, N, A, B);

  printf("Vetor Original: \n");
  imprimir_vetor(vetor, N);

  // Inicialização dos números de Fibonacci
  // Cria vetor para armazenar números de Fibonacci

  int fib[N];

  gerar_fibonacci(N, fib, B);

  printf("Vetor Fibonacci: \n");
  imprimir_vetor(fib, N);

  // Filtra os números de Fibonacci do vetor original
  int fibVetor[N];
  int fibCount = 0;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (vetor[i] == fib[j])
      {
        fibVetor[fibCount++] = vetor[i];
        break;
      }
    }
  }

  // Ordenação pelo método do bolha
  gerar_metodo_bolha(fibVetor, fibCount);

  printf("Vetor Fibonacci Ordenado: \n");
  imprimir_vetor(fibVetor, fibCount);

  classificar_posicoes_pares(vetor, N);

  printf("Vetor Pares Ordenadas: \n");
  imprimir_vetor(vetor, N);

  // Parte c)
  classificar_posicoes_impares(vetor, N);

  printf("Vetor impar Ordenado: \n");
  imprimir_vetor(vetor, N);

  return 0;
}
