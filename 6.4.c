//exercício 4
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int funcaoDesconto(float valor_compra, float desconto, float parcelamento){
    
    desconto/=100;
    valor_compra *= 1 - desconto;
    desconto = parcelamento;
    parcelamento = valor_compra/desconto;
    printf("O valor final com desconto é de R$%.2f e o valor de cada parcela é de R$%.2f", valor_compra, parcelamento);
}

void main(){
    float valor_compra, desconto, parcelamento;;
    
    printf("Informe o valor da compra: \n");
    scanf("%f", &valor_compra);
    printf("Informe o valor do desconto (em porcentagem): \n");
    scanf("%f", &desconto);
    printf("Informe a quantidade de parcelas: \n");
    scanf("%f", &parcelamento);
    
    funcaoDesconto(valor_compra,desconto,parcelamento);
    
}