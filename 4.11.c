#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    printf("Digite dois numeros inteiros:");
    scanf("%d %d", &num1, &num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=(num2-num1)*-1;
    printf("\nnum1=%d\t num2=%d\n",num1,num2);

    return 0;
}
