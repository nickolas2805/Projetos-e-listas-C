#include <stdio.h>
#include <math.h>

int main()
{
    int qtdbolinhas, delta;
    float x1;

    printf("Digite uma quantidade de bolinhas:");
    scanf("%d", &qtdbolinhas);

    delta=1-4*(-2*qtdbolinhas);
    x1=(-1+sqrt(delta))/2;

    if (x1==(int)x1){
        printf("\ne possivel fazer um triangulo\n");
    } else {
        printf("\nnao e possivel fazer um triangulo\n");
    }
    return 0;
}
