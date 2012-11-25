// zadanie 3 liczba doskonała - jest sumą podzielników od niej mniejszych
 
#include <stdio.h>

int liczba_dosk(int x);

int main(){
  int i;

  printf("Liczby doskonałe od 0 do 1000\n");

  for(i=0;i<=1000;i++){
      if(liczba_dosk(i)==1){
        printf("%d ",i);
	}
    }
  printf("\n");
}

int liczba_dosk(int x)
{
  double suma_dziel = 0;
  int i=1;

  while(i<=x/2)
    {
      if(x%i==0){
	suma_dziel+=i;
      }
      i++;
    }

  if(x==suma_dziel){
    return 1;
  }
  else{
    return 0;
  }

}
