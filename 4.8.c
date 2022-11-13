#include <stdio.h>

int main()
{
    float valorTotal, valorEntrada;
    int valorPrestacoes;

    printf("Digite o valor da mercadoria:");
    scanf("%f",&valorTotal);

    valorPrestacoes=valorTotal/3;
    valorEntrada=valorTotal-(2*valorPrestacoes);

    printf("\nO valor da entrada e R$%.2f\nO valor de cada uma das duas pretacoes e R$%d\nPara o produto de R$%.2f\n",valorEntrada,valorPrestacoes,valorTotal);

    return 0;
}
