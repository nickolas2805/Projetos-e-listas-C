#include<stdio.h>

int main()
{
    int qtdbolinhas, resto;
    printf("Digite a quantidade de bolinhas de gude:");
    scanf("%d",&qtdbolinhas);

    resto=qtdbolinhas%3;

    if (resto==0){
        printf("\ne possivel dividir igualmente entre os 3 irmaos\n");
    } else {
        printf("\nnao e possivel dividir igualmente entre os 3 irmaos\n");
    }
    return 0;
}
