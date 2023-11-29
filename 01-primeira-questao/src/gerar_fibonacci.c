#include <stdio.h>
#include <stdlib.h>

#include "gerar_fibonacci.h"

void gerar_fibonacci(int n, int fib[], int max)
{
  fib[0] = 0;
  fib[1] = 1;
  int i;
  for (i = 2; i < n; i++)
  {
    fib[i] = fib[i - 1] + fib[i - 2];
    if (fib[i] > max)
    {
      break;
    }
  }
}