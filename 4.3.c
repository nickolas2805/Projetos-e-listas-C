#include <stdio.h>

int main()
{
    int num,inverso;
    printf("Digite um numero inteiro de dois digitos:");
    scanf("%d",&num);

    inverso=((num%10)*10)+num/10;

    printf("\nO inverso de %d e %.2d\n",num,inverso);

    return 0;
}
