#include <stdio.h>
#include <math.h>

int main() {
  int grado;

  // Pedirle el grado de polinomio al usuario
  printf("¿De qué grado es el polinomio? ");
  scanf("%d", &grado);

  // Pedirle los coeficientes al usuario
  int coeficientes[grado];

  for (int i  = grado; i >= 0; i--) {
    int temp;

    printf("¿Cuál es el coeficiente de x^%d?", i);
    scanf("%d", &temp);

    coeficientes[grado - i] = temp;
  }

  printf("\n\tx\t|\tf(x)\t\n");
  printf("**********************************\n");

  // Imprimir el valor de f(x)
  for (int i = -10; i < 10; i++) {
    float result = 0;

    // Calcular el valor de f(x)
    for (int j  = grado; j >= 0; j--) {
      float operation = coeficientes[grado - j] * pow(i, j);
      result += operation;
    }

    printf("\t%d\t|\t%.2f\t\n", i, result);
  }

  return 0;
}
