#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int qtdbolinhas, delta, numtriangular, sobra, razao;
    float x1;

    printf("Digite uma quantidade de bolinhas:");
    scanf("%d", &qtdbolinhas);

    delta=1-4*(-2*qtdbolinhas);
    x1=(-1+sqrt(delta))/2;

    razao=x1;
    numtriangular=(razao*(razao+1))/2;
    sobra=qtdbolinhas-numtriangular;

    system("cls");
    printf("\nQtd de bolinhas\tNivel do triangulo\tSobra");
    printf("\n\t%d\t\t%d\t\t  %d\n",qtdbolinhas,razao,sobra);

    return 0;
}
