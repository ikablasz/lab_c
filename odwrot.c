#include <stdio.h>
#include <math.h>

int main()
{
  double a, odw, pierw;

  printf ("podaj jakas liczbe:");
  scanf ("%lf",&a);

  if (a>=0)
    {
      pierw=sqrt(a);
      printf("pierwiastek kwadratowy z tej liczby to:%2.2lf\n",pierw);
    }
  else
    printf("podales ujemna liczbe");

  if (a!=0)
    {
      odw=1/(a);
      printf("odwrotnosc tej liczby to: %2.2lf\n",odw);
    }
  else
    printf("podales liczbe 0");

    return 0;
}
