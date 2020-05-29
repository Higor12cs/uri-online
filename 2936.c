//ok
#include<stdio.h>

int main(void){
  int cur, boi, bot, map, lar;

  scanf("%i%i%i%i%i", &cur, &boi, &bot, &map, &lar);

  printf("%i\n", cur*300+boi*1500+bot*600+map*1000+lar*150+225);
}
