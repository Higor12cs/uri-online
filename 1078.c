//ok
#include<stdio.h>

int main(void){
    int val, i;

    scanf("%i", &val);

    for(i=1; i<=10; i++){
        printf("%i x %i = %i\n", i, val, val*i);
    }
}