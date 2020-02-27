#include <stdio.h>

int main() {
  // Pedirle el rango al usuario
  int start;
  int end;

  printf("¿Cuál es el inicio del intervalo?\n");
  scanf("%d", &start);

  printf("¿Cuál es el final del intervalo?\n");
  scanf("%d", &end);

  printf("Los números impares en el intervalo son:\n");

  // Iniciar bucle
  for (; start <= end; start += 1) {
    if (start % 2 != 0) {
      printf("%d\n", start);
    }
  }

  return 0;
}
