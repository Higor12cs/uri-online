//ok
#include<stdio.h>

int main(void){
  int par, nfol, npar;
  scanf("%i%i%i", &par, &nfol, &npar);

  /*if(nfol/par==npar){
    printf("S\n");
  }
  else{
    printf("N\n");
  }*/

  int res=nfol/par;

  if(res>=npar)
    printf("S\n");
  else
    printf("N\n");
}
