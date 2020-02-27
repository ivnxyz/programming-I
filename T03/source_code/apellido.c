#include <stdio.h>

int main() {
  char c;

  printf("Ingresa un caracter:");
  scanf("%c", &c);

  for (int i = 0; i < 5; i++) {
    switch(i) {
      case 0:
        printf("%c    %c     %c     %c%c  %c%c%c %c%c%c  %c    %c  %c%c%c %c%c%c%c\n", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
        break;
      case 1:
        printf("%c%c  %c%c    %c %c    %c %c  %c   %c   %c%c   %c  %c     %c\n", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
        break;
      case 2:
        printf("%c %c%c %c   %c%c%c%c%c   %c%c%c  %c   %c   %c %c  %c  %c%c%c  %c  \n", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
        break;
      case 3:
        printf("%c    %c  %c     %c  %c%c   %c   %c   %c  %c %c  %c   %c   \n", c, c, c, c, c, c, c, c, c, c, c, c, c);
        break;
      case 4:
        printf("%c    %c %c       %c %c %c  %c  %c%c%c  %c   %c%c  %c%c%c %c%c%c%c\n", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
        break;
      default:
        break;
    }
  }

  return 0;
}
