//zadanie 5
#include <stdio.h>

int main(){
  int tab[6],i;
  
  for(i=0;i<6;i++){
      printf("Podaj %d. liczbę\n",i+1);
      scanf("%d",&tab[i]);
    }
  
  for(i=5;i>-1;i--){
      printf("%d. liczba = %d\n",i+1,tab[i]);
    }

  return 0;
<<<<<<< HEAD
}  
=======
}

>>>>>>> f8b607eaef3df49a7c442c6b014919affe061abf
