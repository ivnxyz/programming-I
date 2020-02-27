#include <stdio.h>

int main() {
  double temp;
  char unidad;

  // Pedirle la temperatura al usuario
  printf("Dame la temperatura:");
  scanf("%lf", &temp);

  printf("¿En qué unidad está la temperatura?\nf=Farenheit\nc=Celsius\nk=Kelvin\n");
  scanf(" %c", &unidad);

  for(int i = 0; i < 2; i += 1) {
    switch (i) {
      case 0:
        // Verificar la unidad de la temperatura
        switch (unidad) {
          case 'f':;
            double resultadoCelsius = (temp - 32) * (5.0/9.0);
            printf("Resultado en Celsius: %lf\n", resultadoCelsius);
            break;
          case 'c':;
            double resultadoFarenheit = (((9.0 * temp)/5.0) + 32);
            printf("Resultado en Farenheit: %lf\n", resultadoFarenheit);
            break;
          case 'k':;
            double resultadoFarenheit1 = ((9.0 * (temp - 273.15))/5.0) + 32;
            printf("Resultado en Farenheit: %lf\n", resultadoFarenheit1);
          default:
            break;
        }
        break;
      case 1:
        // Verificar la unidad de la temperatura
        switch (unidad) {
          case 'f':;
            double resultadoKelvin = (((5 * (temp - 32.0))/9) + 273.15);
            printf("Resultado en Kelvin: %lf\n", resultadoKelvin);
            break;
          case 'c':;
            double resultadoKelvin1 = temp + 273.15;
            printf("Resultado en Kelvin: %lf\n", resultadoKelvin1);
            break;
          case 'k':;
          double resultadoCelsius1 = temp - 273.15;
          printf("Resultado en Celsius: %lf\n", resultadoCelsius1);
          default:
            break;
        }
        break;
      default:
        break;
    }
  }

  return 0;
}
