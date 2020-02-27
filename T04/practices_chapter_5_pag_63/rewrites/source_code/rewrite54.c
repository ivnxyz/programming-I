#include <stdio.h>

int main(void) {
  /*
    Reescribe el programa 5.4 para usar ciclos while.
  */

  int number;

  int n = 1;
  int triangularNumber = 0;

  printf("What triangular number do you want? ");
  scanf("%i", & number);

  while (n <= number) {
    triangularNumber += n;

    ++n;
  }

  printf("Triangular number %i is %i\n", number, triangularNumber);

  return 0;
}
