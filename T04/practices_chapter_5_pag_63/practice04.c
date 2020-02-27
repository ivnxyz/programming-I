#include <stdio.h>

int main() {
    /*
    Este programa genera una tabla con los primeros 10 números factoriales.
    */

    printf("  n  |  n!  \n");
    printf("------------\n");

    for (int i = 1; i <= 10; i++) {
      int result = 1;

      for (int j = 1; j <= i; j++) {
        result = result * j;
      }

      printf("  %d  |  %d  \n", i, result);
    }

    return 0;
}
