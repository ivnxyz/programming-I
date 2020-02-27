/*
  Este programa recibe un caracter y determina si es una letra mayúscula, una letra minúscula, un número o un caracter especial.
*/
#include<stdio.h>

int main() {
  // Pedir caracter al usuario
  char c;

  printf("Ingresa un caracter: \n");
  scanf("%c", &c);

  /*
    Verififcar si el caracter está dentro del rango de caracteres de un alfabeto.
    Valores ASCII de las mayúsculas: 65 - 90.
    Valores ASCII de las minúsculas: 97 - 122.
    Valores ASCII de los números: 48 - 57.
  */

  if (c >= 65 && c <= 90) {
    printf("El caracter es una letra mayúscula.\n");
  } else if (c >= 97 && c <= 122) {
    printf("El caracter es una letra minúscula.\n");
  } else if (c >= 48 && c <= 57) {
    printf("El caracter es un número.\n");
  } else {
    printf("El caracter es especial <3\n");
  }


  return 0;
}
