//Zadanie 8

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int los(){
  int pocz;
  pocz = time(NULL);
  srand(pocz);
  return rand()%1001;
}

void zag(int liczba){
  
  int wyjscie=0,n;
  

  while(wyjscie!=1){
      printf("Zgadnij jaka to liczba.\n");
      scanf("%d",&n);

      if(n==liczba){
        printf("Zgadles!\n");
	  wyjscie=1;
      }
      else{
        if (n>liczba){
	    printf("Za duzo\n");
          }
	  else{
	   printf("Za malo\n");				      }
      }
   }
}
      

int main(){
  int liczba;

  liczba = los();
  zag(liczba);
}
