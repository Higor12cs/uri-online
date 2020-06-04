//ok
#include<stdio.h>

int main(void){
  int num, i=1, cont=0;
  scanf("%i", &num);

  while(cont<num){
    printf("%i %i %i PUM\n", i, i+1, i+2);
    i=i+4;
    cont++;
  }
}
