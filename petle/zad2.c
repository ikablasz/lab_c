// petle zadanie 1 

#include <stdio.h>

int main() {
  int x = 2;
  
  printf("kolejne potegi liczby 2 nie przekraczajace 2010:\n");
  printf("%d", 1);
  while (x <= 2010) {
    printf(", %d",x);
    x *=2;
  }
  printf("\n");
}
