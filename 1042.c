//ok
#include<stdio.h>

int main(void){
  int nu1, nu2, nu3;
  int au1, au2, au3;

  scanf("%i%i%i", &nu1, &nu2, &nu3);
  au1=nu1; au2=nu2; au3=nu3;

  int aux;
  //menor p/ maior
  if(nu1>nu2){
    aux=nu1;
    nu1=nu2;
    nu2=aux;
  }
  if(nu2>nu3){
    aux=nu2;
    nu2=nu3;
    nu3=aux;
  }
  if(nu1>nu2){
    aux=nu1;
    nu1=nu2;
    nu2=aux;
  }
  printf("%i\n%i\n%i\n", nu1, nu2, nu3);
  //valor inicial
  printf("\n");
  printf("%i\n%i\n%i\n", au1, au2, au3);
}
