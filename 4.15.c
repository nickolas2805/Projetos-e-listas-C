#include<stdio.h>

int main (){
    int num1, esquerda, direita, calcEsquerda, calcDireira;
    printf ("Digite um numero de 7 digitos:");
    scanf ("%d", &num1);

    if (num1<0){
        printf ("Por favor digite um numero positivo:");
        scanf ("%d", &num1);
    } else if (num1>9999999 || num1<1000000){
        printf ("O numero precisa ter 7 digitos:");
        scanf ("%d", &num1);
    } else {
        direita=num1%1000;
        esquerda=num1/10000;

        /*soma direita*/
        calcDireira=direita%10;
        direita/=10;
        calcDireira=calcDireira+(direita%10);
        direita/=10;
        calcDireira=calcDireira+(direita%10);

        /*soma esquerda*/
        calcEsquerda=esquerda%10;
        esquerda/=10;
        calcEsquerda=calcEsquerda+(esquerda%10);
        esquerda/=10;
        calcEsquerda=calcEsquerda+(esquerda%10);

        if (calcEsquerda==calcDireira){
            printf ("\nEste e um numero balanceado\n");
        } else {
            printf ("\nEste nao e um numero balanceado\n");
        }
    }


  return 0;
}
