#include <stdio.h>

int main (void) {
  /*
    Reescribe el programa 5.3 para usar ciclos while.
  */

  int triangularNumber = 0;
  int n = 1;

  printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
  printf (" n Sum from 1 to n\n");
  printf ("--- ---------------\n");

  while (n <= 10) {
    triangularNumber += n;
    printf (" %i %i\n", n, triangularNumber);

    ++n;
  }

  return 0;
}
