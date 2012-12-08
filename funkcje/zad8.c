//Zadanie 8

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int losuj()
{
  int zarodek;
  zarodek = time(NULL);
  srand(zarodek);
  return rand()%1001;
}

void zgaduj(int liczba)
{
  int wyjscie=0,n;
  

  while(wyjscie!=1)
    {
      printf("Zgadnij jaka to liczba.\n");
      scanf("%d",&n);

      if(n==liczba)
      {
        printf("gratuluje! zgadles!\n");
	  wyjscie=1;
	  }
      else 
      {
        if (n>liczba)
	    {
	          printf("Za duzo\n");
		      }
		        else
			    {
			          printf("Za malo\n");				      }
      }
    }
}
      

int main()
{
  int liczba;

  liczba = losuj();
  zgaduj(liczba);
}
