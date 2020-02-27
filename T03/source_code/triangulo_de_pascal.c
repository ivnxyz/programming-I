#include <stdio.h>
#include <math.h>

int main() {
  // Pedirle el número de filas al usuario
  int rows;

  printf("Ingrese el valor de n: ");
  scanf("%d", &rows);

  printf("\n**** El triángulo de Pascal ****\n");

  // Iterar el número de filas que se necesitan
  for (int i = 0; i < rows; i += 1) {
    int value = 1;

    // Iterar el número de columnas que se necesitan
    for (int j = 0; j <= i; j += 1) {
      printf("%d ", value);
      value = value * (i - j) / (j + 1);
    }

    printf("\n");
  }

  return 0;
}
