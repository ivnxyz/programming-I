#include <stdio.h>

int main(void) {
  /*
    Reescribe el programa 5.5 para usar ciclos while.
  */

  int number;
  int counter = 1;

  while (counter <= 5) {
    printf("What triangular number do you want? ");
    scanf("%i", &number);

    int triangularNumber = 0;
    int n = 1;

    while (n <= number) {
      triangularNumber += n;
      ++n;
    }

    printf("Triangular number %i is %i\n\n", number, triangularNumber);

    ++counter;
  }

  return 0;
}
