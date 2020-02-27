#include <stdio.h>

int main (void) {
  /*
    Reescribe el programa 5.2 para usar ciclos while.
  */

  int triangularNumber = 0;
  int n = 1;

  while (n <= 200) {
    triangularNumber = triangularNumber + n;

    n += 1;
  }

  printf("The 200th triangular number is %i\n", triangularNumber);

  return 0;
}
