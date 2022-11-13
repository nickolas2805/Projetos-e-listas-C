#include <stdio.h>

int main(){

    int num1,num2;

    printf("Digite dois numeros inteiros:");
    scanf("%d %d",&num1,&num2);

    if ((num1%num2)==0){

        printf("\nO primeiro numero e multiplo do segundo\n");

    } else {

        printf("\nO primeiro numero nao e multiplo do segundo\n");

    }
}
