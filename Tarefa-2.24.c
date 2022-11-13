#include <stdio.h>

int main(){

    int num1, resto;

    printf("Digite um numero:");

        scanf("%d",&num1);

    resto=(num1%2);

    if (resto==0){
        printf("\nO numero digitado e par!\n");
    }
    if  (resto!=0) {
            printf("\nO numero digitado e impar!\n");
    }

    return 0;
}
