#include <stdio.h>
#include <math.h>

int main()
{
  float a,b;

  printf("Podaj liczbe: ");
  scanf("%f",&a);

  if (a >= 0)
    {
      b=a*a;
      printf("Kwadrat z tej liczby to:%2.1f\n",b);
    }
  else 
    printf("Podales ujemna liczbe\n");
    return 0;
}
