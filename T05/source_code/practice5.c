#include <stdio.h>

int main() {

  for (int i = 1; i <= 100; i++) {
    int isPrime = 1;

    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        isPrime = 0;
      }
    }
    
    if (isPrime) {
      printf("%d\n", i);
    }
  }

  return 0;
}
