#include <stdio.h>
#include <stdlib.h>

int main(){
    int tempf;
    float tempc;

    printf("Digite a temperatura em Fahrenheit:");
    scanf("%d",&tempf);

    tempc=(tempf-32)/1,8;

    printf("\nA temperatura e %.1fC\n",tempc);

    return 0;
}
