//zadanie 7
#include <stdio.h>

int main(){
  double tab[6];
  int i;

  for(i=0;i<6;i++){
      printf("Podaj %d. liczbę\n",i+1);
      scanf("%lf",&tab[i]);
    }
  if (tab[i] > 0){
    printf("Liczba dodatnich liczb w tablicy to: %lf",tab[i]);
  }
}
