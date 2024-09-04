#include <stdio.h>
#include <stdlib.h>

int main ()
{
int ni;
    printf("Digite um numero inteiro positivo:")
    scanf("%d", &ni);

    if (ni<=0){
        printf("Entrada invalida");
        return 1;
    }

    while(ni>1) {
        if((ni%2)==1) {
             ni = 3*ni+1;
        }
        else{
            ni = ni/2
        }
        printf("ni = %d\n", ni);
    }
    return 0;
 }
