//ok
#include<stdio.h>

int main(void){
  int ddd;
  scanf("%i", &ddd);

  if(ddd==61)
    printf("Brasilia\n");
  else if(ddd==71)
    printf("Salvador\n");
  else if(ddd==11)
    printf("Sao Paulo\n");
  else if(ddd==21)
    printf("Rio de Janeiro\n");
  else if(ddd==32)
    printf("Juiz de Fora\n");
  else if(ddd==19)
    printf("Campinas\n");
  else if(ddd==27)
    printf("Vitoria\n");
  else if(ddd==31)
    printf("Belo Horizonte\n");
  else
    printf("DDD nao cadastrado\n");
/*
  switch (ddd) {
    case 61:
      printf("Brasilia\n");
      break;
    case 71:
      printf("Salvador\n");
      break;
    case 11:
      printf("Sao Paulo\n");
      break;
    case 21:
      printf("Rio de Janeiro\n");
      break;
    case 32:
      printf("Juiz de Fora\n");
      break;
    case 19:
      printf("Campinas\n");
      break;
    case 27:
      printf("Vitoria\n");
      break;
    case 31:
      printf("Belo Horizonte\n");
      break;
    default:
      printf("DDD nao cadastrado:\n");
      break;
  }*/
}
