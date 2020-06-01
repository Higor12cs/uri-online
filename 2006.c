//ok
#include<stdio.h>

int main(void){
  int tip, res[4];
  scanf("%i", &tip);
  scanf("%i%i%i%i%i", &res[0], &res[1], &res[2], &res[3], &res[4]);

  int i, resp=0;
  for(i=0; i<5; i++){
    if(res[i]==tip){
      resp=resp+1;
    }
  }
  printf("%i\n", resp);
}
