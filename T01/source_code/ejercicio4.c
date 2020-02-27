/*
  Este programa recibe dos números y determina cuál es el mayor.
*/
#include<stdio.h>

int main() {
  // Pedir números al usuario
  float first_number;
  float second_number;

  printf("Ingresa el primer número: \n");
  scanf("%f", &first_number);

  printf("Ingresa el segundo número: \n");
  scanf("%f", &second_number);

  // Verificar cuál es el mayor (o si son iguales)
  if (first_number > second_number) {
    printf("El primer número es mayor al segundo (%f > %f)", first_number, second_number);
  } else if (second_number > first_number) {
    printf("El segundo número es mayor al primero (%f > %f)", second_number, first_number);
  } else {
    printf("Los números son iguales (%f = %f)", first_number, second_number);
  }

  return 0;
}
