#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Imprime barras para par:/, para impar:\, e para 0:| */

char* barras_parimpar0(char str_numero[100]){

    int tamanho, digito, i;
    tamanho = strlen(str_numero) - 1;
    char *barras = malloc(tamanho);

    strcpy(barras, "");

    for (i=0;tamanho >= i;i++){

    digito = str_numero[i] - 48;

    if (digito == 0)
        strcat(barras, "|");
    else if (digito % 2 == 0)
        strcat(barras, "\\");
    else
        strcat(barras, "/");
    }
    return barras;
}



int main(void)
{
    char numero1[100];
    char *barras;

    printf("Digite um numero inteiro:");
    scanf("%s", &numero1);

    barras = barras_parimpar0 (numero1);

    printf("\n%s\n", barras);

}
