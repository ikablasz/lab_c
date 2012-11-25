// zadanie 4 
#include <stdio.h>

int main(){
  int a,n,b=0;

  printf("podaj jakas liczbe\n");
  scanf("%d",&n);

  if (n > 0){

    for (a=1; a<=n; a++){
      b+=a;
    }
    printf("suma liczb od 1 do %d:,%d\n",n,b);
  }
  else{
    printf("podales liczbe mniejsza niz 1\n");
  }
}
