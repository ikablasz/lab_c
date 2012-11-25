//zadanie 1 Oblicza przeciwprostokątną 

#include <stdio.h>
#include <math.h>

double przeciw(double a,double b){
  return sqrt((a*a)+(b*b));
}

int main()
{
  double a,b;

  printf("podaj dl 1 przyprost\n");
  scanf("%lf",&a);
  printf("podaj dl 2 przyprostokatnej\n");
  scanf("%lf",&b);
  
  printf("Dl przeciwprostokatnej tego trojkata to :%.2lf\n",przeciw(a,b)); 
}
