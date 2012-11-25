//zadanie 1 - Oblicza przeciwprostokątną 

#include <stdio.h>
#include <math.h>

double przeciw(double a,double b);  

int main()
{
  double a,b;

  printf("podaj długość 1 przyprost\n");
  scanf("%lf",&a);
  printf("podaj długość 2 przyprostokatnej\n");
  scanf("%lf",&b);
  
  printf("Dlugość przeciwprostokatnej tego trojkata to: %.2lf\n",przeciw(a,b));
}

double przeciw(double a, double b){
  return sqrt((a*a)+(b*b));
}
