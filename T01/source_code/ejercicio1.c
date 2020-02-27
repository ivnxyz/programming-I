/*
  Este programa pide un caracter como entrada e imprime su valor en ASCII.
*/
#include<stdio.h>

int main() {
  // Pedir character del usuario
  char c;

  printf("Ingresa un caracter: \n");
  scanf("%c", &c);

  // Imprimir valor numérico del caracter
  printf("El valor ASCII de %c es %i\n", c, c);

  return 0;
}
