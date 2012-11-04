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
      printf("%2.1f,%char,%2.1f\n",a,"^2=",b);
    }
  else 
    printf("Podales ujemna liczbe\n");
    return 0;
}
