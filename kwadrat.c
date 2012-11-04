#include <stdio.h>
#include <math.h>

int main()
{
  double a,b;

  printf("Podaj liczbe: ");
  scanf("%lf",&a);

  if (a >= 0)
    {
      b=sqrt(a);
      printf("Kwadrat z tej liczby to:%2.1lf\n",b);
    }
  else 
    printf("Podales ujemna liczbe\n");
    return 0;
}
