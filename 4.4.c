#include <stdio.h>

int main()
{
    int num,inverso;
    printf("Digite um numero inteiro de tres digitos:");
    scanf("%d",&num);

    inverso=(((num/100)/*centenas*/)+(((num/10)%10)*10/*dezenas*/)+((num%10)*100/*unidades*/));

    printf("\nO inverso de %d e %.3d\n",num,inverso);

    return 0;
}
