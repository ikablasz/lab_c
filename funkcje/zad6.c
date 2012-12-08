#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int spraw(int a, int b, int wynik) 
{
  if(wynik==a*b)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

int rnd(int min, int max)
{
  int tmp;
  if (max>=min)
    max-= min;
  else
    {
      tmp= min - max;
      min= max;
      max= tmp;
    }
  return max ? (rand() % max + min) : min;
}

void mainMenu()
{
  int wyjscie=0,wynik,a,b,zla_odp=0,dobra_odp=0;

  printf("Program sprawdzi czy potrafisz mnozyc.\n");
  
  while(wyjscie!=5)
    {
      printf("\n");
      a=rnd(1,10);
      b=rnd(1,10);
      printf("Ile to jest %d * %d ?\n",a,b);
      scanf("%d",&wynik);

      if(spraw(a,b,wynik)==1)
      {
        printf("Dobra odpowiedz !!!\n");
	  dobra_odp++;
	  }
      else
      {
        printf("Zla odpowiedz !!!\n");
	  zla_odp++;
	  }

      wyjscie++;
    }
      
     
  printf("\n");
  printf("Podsumowanie: %d Dobrych odpowiedzi, %d Zlych odpowiedzi\n",dobra_odp,zla_odp);
}

int main()
{
  mainMenu();
}
