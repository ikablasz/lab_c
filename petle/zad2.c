// petle zadanie 1 

#include <stdio.h>

int main() {
  int x = 1;
  
  printf("kolejne potegi liczby 2 nie przekraczajace 2010:\n");
  
  while (x <= 2010) {
    printf("%d, ",x);
    x *=2;
  }
  printf("\n");
}
