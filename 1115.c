//ok
#include<stdio.h>

int main(void){
  int x, y;

  for(;;){
    scanf("%i%i", &x, &y);

    if(x==0||y==0)
      break;
    else if(x>0&&y>0)
      printf("primeiro\n");
    else if(x>0&&y<0)
      printf("quarto\n");
    else if(x<0&&y>0)
      printf("segundo\n");
    else
      printf("terceiro\n");
  }
}
