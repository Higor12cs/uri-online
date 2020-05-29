//ok
#include<stdio.h>

int main(void){
  int val[4];
  int i, c=0;

  for(i=0; i<5; i++){
    scanf("%i", &val[i]);
    if(val[i]%2==0)
      c++;
  }

  printf("%i valores pares\n", c);
}
