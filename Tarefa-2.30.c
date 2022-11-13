#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int num, digito1, digito2, digito3, digito4, digito5;

    printf("Digite um número de 5 digitos:");
    scanf("%d",&num);

    if (num>9999 && num<100000){
        digito5=num%10;
        num/=10;
        digito4=num%10;
        num/=10;
        digito3=num%10;
        num/=10;
        digito2=num%10;
        num/=10;
        digito1=num%10;

    printf("\nOs digitos sao %d   %d   %d   %d   %d\n",digito1,digito2,digito3,digito4,digito5);

    } else {
        printf("\nNumero invalido\n");
    }

    return 0;
}
