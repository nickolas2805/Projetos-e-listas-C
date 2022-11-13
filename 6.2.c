#include <stdlib.h>
#include <stdio.h>

void quadrado (int a){
    int primeiro = 1, x;
    printf("\n");
    if (primeiro <= a){
        for (primeiro; primeiro <= a; primeiro++){
            for (x = 1; x <= a; x++){
                printf("%d ",x);
            }
        printf("\n");
        }
    } else
        printf("Entrada inválida");
}


int main()
{
    int num1;
    printf("Digite um numero inteiro:");
    scanf("%d", &num1);
    quadrado(num1);
    return 0;
}
