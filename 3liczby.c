#include <stdio.h>
#include <math.h>

int suma(int,int,int);
int iloczyn(int,int,int);
int min(int,int,int);
int max(int,int,int);

int main()
{
  int a,b,c;

  printf("Wprowadz 3 liczby po kazdej wciskajac Enter\n");
  scanf("%i",&a);
  scanf("%i",&b);
  scanf("%i",&c);

  printf("Suma tych liczb wynosi: %i\n",suma(a,b,c));
  printf("Iloczyn tych liczb to: %i\n",iloczyn(a,b,c));
  printf("Najmniejsza z tych liczb to: %i\n",min(a,b,c));
  printf("Najwieksza z tych liczb to: %i\n",max(a,b,c));

  return 0;
}
	 
  int suma(int a, int b, int c)
  {
    return a+b+c;
  }

  int iloczyn(int a, int b, int c)
  {
    return a*b*c;
  }

  int min(int a, int b, int c)
  {
    int min=a;

    if (b<min)
      {
	min=b;
      }
    if (c<min)
      {
	min=c;
      }
   return min;
  }
  
  int max(int a, int b, int c)
  {
    int max=a;

    if (b>max)
      {
        max=b;
      }
    if (c>max)
      {
        max=c;
      }
    return max;
  }


