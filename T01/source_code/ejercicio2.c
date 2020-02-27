/*
  Este programa recibe un caracter y revisa si está en algún alfabeto.
*/
#include<stdio.h>

int main() {
  // Pedir character del usuario
  char c;

  printf("Ingresa un caracter: \n");
  scanf("%c", &c);

  /*
    Verififcar si el caracter está dentro del rango de caracteres de un alfabeto.
    El valor ASCII de un alfabeto va de 65 a 90 para mayúsculas y de 97 a 122 para minúsculas.
  */

  if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
    printf("El caracter SÍ está dentro de un alfabeto\n");
  } else {
    printf("El caracter NO está dentro de un alfabeto\n");
  }

  return 0;
}
