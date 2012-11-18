#include <stdio.h>
#include <math.h>

int silnia(int a){
  int b,c=1;

  for(a=1;a<b;a++){
    c*=a;
  }
  return c;
}

int main()
{
  int b;

  printf("podaj jakas liczbe");
  scanf("%d",&b);
  
  printf("silnia wynosi :%d\n",silnia(a)); 
}
