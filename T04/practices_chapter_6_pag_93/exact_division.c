#include <stdio.h>

int main() {
  /*
  Este programa le pide dos números al usuario
  y revisa si el primer número es divisible
  entre el segundo.
  */

  int a, b;

  printf("Ingresa el primer número: ");
  scanf("%d", &a);

  printf("Ingresa el segundo número: ");
  scanf("%d", &b);

  if (b == 0) {
    printf("La división por 0 es ilegal.\n");
  } else {
    if (a % b == 0) {
      printf("%d es extactamente divisible por %d\n", a, b);
    } else {
      printf("%d no es exactamente divisible por %d :(\n", a, b);
    }
  }

  return 0;
}
