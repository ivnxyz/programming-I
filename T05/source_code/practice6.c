#include <stdio.h>

int main() {
  char number[] = "";
  int numberLength;

  printf("Ingresa un número: ");
  scanf("%s", number);

  // Calcular el largo del número
  while (number[numberLength] != '\0') {
    numberLength += 1;
  }

  // Crear variable para almacenar el número al revés
  char reversedNumber[numberLength];
  int strEnd = numberLength - 1;

  int strBegin = 0;

  while (strBegin < numberLength) {
    reversedNumber[strBegin] = number[strEnd];

    strEnd -= 1;
    strBegin += 1;
  }

  reversedNumber[strBegin] = '\0';

  printf("\n%s\n", reversedNumber);

  return 0;
}
