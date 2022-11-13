#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, centena, dezena;

    printf("Digite um numero inteiro:");
    scanf("%d",&num1);

    centena=0;
    dezena=0;
    centena=(num1/100)%10;
    dezena=(num1%100)/10;
    num1%=10;
    printf("\nCentena:%d\nDezena:%d\nUnidade:%d\n",centena,dezena,num1);

    return 0;
}
