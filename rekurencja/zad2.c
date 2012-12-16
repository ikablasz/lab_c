#include <stdio.h>

int newton(int n,int k);

int main(){
  
  int n,k;

  printf("podaj n\n");
  scanf("%d", &n);
  printf("podaj k\n");
  scanf("%d", &k);
  printf("symbol newtona wynosi: %d\n",newton(n,k));

}

int newton(int n,int k){
  if(k==0 || k==n){
    return 1;
  }
  else{
  if(k>0 && k<n){
    return newton(n-1,k-1)+newton(n-1,k);
  }}
}
