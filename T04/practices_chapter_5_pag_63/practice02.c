#include <stdio.h>

int main() {
  /*
  Este programa genera una tabla de n y n^2 para los valores enteros
  del 1 al 10.
  */

  printf("  n  |  n^2  \n");
  printf("-------------\n");

  for(int i = 1; i <= 10; i++) {
    printf("  %d  |  %d  \n", i, i * i);
  }

  return 0;
}
