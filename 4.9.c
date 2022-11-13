#include<stdio.h>

int main()
{
    int saque, duzentos, cem, cinquenta, vinte, dez, cinco, dois;
    printf("Digite o valor a ser sacado:");
    scanf("%d",&saque);

    duzentos=saque/200;
    saque%=200;
    cem=saque/100;
    saque%=100;
    cinquenta=saque/50;
    saque%=50;
    vinte=saque/20;
    saque%=20;
    dez=saque/10;
    saque%=10;
    cinco=saque/5;
    saque%=5;
    dois=saque/2;
    saque%=2;

    printf ("\nVoce recebera:\n\n %d notas de R$200\n %d notas de R$100\n %d notas de R$50\n %d notas de R$20\n %d notas de R$10\n %d notas de R$5\n %d notas de R$2\n\nR$%d NAO PODERA SER SACADO\n", duzentos, cem, cinquenta, vinte, dez, cinco, dois, saque);

    return 0;
}
