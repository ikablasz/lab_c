// zadanie 1 - potega

#include <stdio.h>

int potega(int, int);

int main(){

  int a,b;

  printf("podaj podstawe potegi\n");
  scanf("%d",&a);
  printf("podaj wykladnik potegi\n");
  scanf("%d",&b);

  printf("wynik wynosi: %d\n",potega(a,b));
}

int potega(int a, int b){

  if (b == 0){
    return 1;
  }
  else{
      return a = a * potega(a,--b);
    }
  
}
