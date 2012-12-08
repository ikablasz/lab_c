//Zadanie 4  - program oblicza silnie z podanej liczby

#include <stdio.h>

int silnia(int n);

int main(){
  int wynik,n;

  printf("podaj liczbe\n");
  scanf("%d",&n);
  wynik=silnia(n);
  printf("%d!= %d\n",n,wynik);

}

int silnia(int n){

int i,wynik=1;

 if(n==0){
   return 1;
 }
 else{
   for(i=1;i<n+1;i++){
     wynik*=i;
   }
   return wynik;
 }
}
