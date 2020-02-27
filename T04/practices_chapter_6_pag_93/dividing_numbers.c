#include <stdio.h>

int main() {
  /*
  Este programa le pide dos números al usuario
  y muestra el resultado de dividir el primero por el segundo
  */

  float a, b, result;

  printf("Ingresa el primer número: ");
  scanf("%f", &a);

  printf("Ingresa el segundo número: ");
  scanf("%f", &b);

  if (b == 0) {
    printf("Syntax error :(\n");
  } else {
    result = a / b;
    printf("El resultado de la división es: %0.3f.\n", result);
  }

  return 0;
}
