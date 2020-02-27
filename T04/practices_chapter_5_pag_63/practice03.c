#include <stdio.h>

int main() {
  /*
  Este programa genera una tabla de números triangulares usando la fórmula
  n(n+1)/2 para los múltiplos de 5 del 5 al 50.
  */

  printf("  n  |  n(n+1)/2  \n");
  printf("------------------\n");

  for (int i = 5; i <= 50; i += 5) {
    int result = i * (i + 1)/2;
    printf("  %d  |  %d  \n", i, result);
  }

  return 0;
}
