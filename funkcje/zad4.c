// zadanie 4

#include <stdio.h>

int zamiana(int n);

int main(){
  int a;

  printf("podaj liczbę\n");
  scanf("%d", &a);
  printf("Podana liczba: %d. Po zmianie: %d\n", a, zamiana(a));
}

int zamiana(int n){

  char bufor[20], bufor2[20];
  int dl, i;

  snprintf(bufor, 20, "%d",n);
  dl=strlen(bufor);

  for(i=0; i<= dl-1; i++){
    bufor2[i] = bufor[dl-1-i];
  }

  sscanf(bufor2, "%d", &i);

  return i;
}
