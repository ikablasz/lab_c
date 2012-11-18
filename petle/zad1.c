// zadanie 0 Petle
// Kompilacja cc -g -Wall -std=gnu99 zad1.c -o zad1 -lm



#include <stdio.h>
int main() {
  int y, x=1, wynik = 0;
  while (x<=10) {
    y = x*x;
    printf("%d\n", y);
    wynik += y;
    ++x;
  }
  printf("wynik = %d\n", wynik);
  return 0;
}
