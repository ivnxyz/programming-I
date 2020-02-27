#include <stdio.h>
#include <string.h>

#define DATA_LENGTH 5
#define NAME_MAX_LENGTH 256
#define EAGE_AND_WEIGHT_MAX_LENGTH 25

int isValidAge(int age) {
  return age > 0 && age < 100;
}

int main() {
  char names_above_15[DATA_LENGTH][NAME_MAX_LENGTH];
  int ages_above_15[DATA_LENGTH];
  float weights_above_15[DATA_LENGTH];

  char names_under_15[DATA_LENGTH][NAME_MAX_LENGTH];
  int ages_under_15[DATA_LENGTH];
  float weights_under_15[DATA_LENGTH];

  int count = 0;
  int i = 0;
  int j = 0;

  while (count < DATA_LENGTH) {
    char temp_name[NAME_MAX_LENGTH];
    int temp_age;
    float temp_weigth;

    // Pedirle los datos al usuario
    printf("Ingresa el nombre #%d: ", count + 1);
    scanf("%s", temp_name);

    printf("Ingresa la edad #%d: ", count + 1);
    scanf("%d", &temp_age);

    printf("Ingresa el peso #%d: ", count + 1);
    scanf("%f", &temp_weigth);

    if (temp_age > 15) {
      // Guardar datos en las listas de mayores de 15
      strcpy(names_above_15[i], temp_name);
      ages_above_15[i] = temp_age;
      weights_above_15[i] = temp_weigth;

      i++;
    } else {
      // Guardar datos en las listas de menores de 15
      strcpy(names_under_15[j], temp_name);
      ages_under_15[j] = temp_age;
      weights_under_15[j] = temp_weigth;

      j++;
    }

    count++;
  }

  // Comenzar a imprimir los datos
  printf("\n\n************** DATOS ***************\n");
  char final_str[(NAME_MAX_LENGTH + 50) * DATA_LENGTH] = "       >15       |       <=15       \n------------------------------------\n";

  count = 0;

  // Iterar por los datos
  for (int i = 0; i < DATA_LENGTH && count < DATA_LENGTH; i++) {
    // Crear string para los datos
    char message_str[NAME_MAX_LENGTH + EAGE_AND_WEIGHT_MAX_LENGTH * 2] = "";

    if (isValidAge(ages_above_15[i]) && isValidAge(ages_under_15[i])) {
      // Almacenar temporalmente los valores
      char temp_name_above_15[NAME_MAX_LENGTH];
      strcpy(temp_name_above_15, names_above_15[i]);

      char temp_name_under_15[NAME_MAX_LENGTH];
      strcpy(temp_name_under_15, names_under_15[i]);

      char temp_age_above_15[EAGE_AND_WEIGHT_MAX_LENGTH];
      snprintf(temp_age_above_15, EAGE_AND_WEIGHT_MAX_LENGTH, "%d", ages_above_15[i]);

      char temp_age_under_15[NAME_MAX_LENGTH];
      snprintf(temp_age_under_15, EAGE_AND_WEIGHT_MAX_LENGTH, "%d", ages_under_15[i]);

      char temp_weight_above_15[EAGE_AND_WEIGHT_MAX_LENGTH];
      snprintf(temp_weight_above_15, EAGE_AND_WEIGHT_MAX_LENGTH, "%.2f", weights_above_15[i]);

      char temp_weight_under_15[NAME_MAX_LENGTH];
      snprintf(temp_weight_under_15, EAGE_AND_WEIGHT_MAX_LENGTH, "%.2f", weights_under_15[i]);

      // Concatenar los nombres
      strcat(message_str, "Nombre: ");
      strcat(message_str, temp_name_above_15);
      strcat(message_str, "\t\t");
      strcat(message_str, "Nombre: ");
      strcat(message_str, temp_name_under_15);
      strcat(message_str, "\n");

      // Concatenar la edad
      strcat(message_str, "Edad: ");
      strcat(message_str, temp_age_above_15);
      strcat(message_str, "\t\t");
      strcat(message_str, "Edad: ");
      strcat(message_str, temp_age_under_15);
      strcat(message_str, "\n");

      // Concatenar el peso
      strcat(message_str, "Peso: ");
      strcat(message_str, temp_weight_above_15);
      strcat(message_str, "\t\t");
      strcat(message_str, "Peso: ");
      strcat(message_str, temp_weight_under_15);
      strcat(message_str, "\n");

      count += 2;
    } else if (isValidAge(ages_above_15[i])) {
      // Almacenar temporalmente los valores
      char temp_name[NAME_MAX_LENGTH];
      strcpy(temp_name, names_above_15[i]);

      char temp_age[EAGE_AND_WEIGHT_MAX_LENGTH];
      snprintf(temp_age, EAGE_AND_WEIGHT_MAX_LENGTH, "%d", ages_above_15[i]);

      char temp_weigth[EAGE_AND_WEIGHT_MAX_LENGTH];
      snprintf(temp_weigth, EAGE_AND_WEIGHT_MAX_LENGTH, "%.2f", weights_above_15[i]);

      // Concatenar el nombre
      strcat(message_str, "Nombre: ");
      strcat(message_str, temp_name);
      strcat(message_str, "\n");

      // Concatenar la edad
      strcat(message_str, "Edad: ");
      strcat(message_str, temp_age);
      strcat(message_str, "\n");

      // Concatenar el peso
      strcat(message_str, "Peso: ");
      strcat(message_str, temp_weigth);
      strcat(message_str, "\n");

      count += 1;
    } else if (isValidAge(ages_under_15[i])) {
      // Almacenar temporalmente los valores
      char temp_name_under_15[NAME_MAX_LENGTH];
      strcpy(temp_name_under_15, names_under_15[i]);

      char temp_age_under_15[NAME_MAX_LENGTH];
      snprintf(temp_age_under_15, EAGE_AND_WEIGHT_MAX_LENGTH, "%d", ages_under_15[i]);

      char temp_weight_under_15[NAME_MAX_LENGTH];
      snprintf(temp_weight_under_15, EAGE_AND_WEIGHT_MAX_LENGTH, "%.2f", weights_under_15[i]);

      // Concatenar el nombre
      strcat(message_str, "\t\t\t");
      strcat(message_str, "Nombre: ");
      strcat(message_str, temp_name_under_15);
      strcat(message_str, "\n");

      // Concatenar la edad
      strcat(message_str, "\t\t\t");
      strcat(message_str, "Edad: ");
      strcat(message_str, temp_age_under_15);
      strcat(message_str, "\n");

      // Concatenar el peso
      strcat(message_str, "\t\t\t");
      strcat(message_str, "Peso: ");
      strcat(message_str, temp_weight_under_15);
      strcat(message_str, "\n");

      count += 1;
    }

    // Concatenar todo al string final
    strcat(final_str, message_str);
    strcat(final_str, "\n");
  }

  printf("%s\n", final_str);

  return 0;
}
