#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, num4, num5;

    printf("Digite 5 numeros inteiros:");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);

    /* Maior */

    if (num1>num2&&num1>num3&&num1>num4&&num1>num5){
        printf("O maior: %d", num1);
    }
    if (num2>num1&&num2>num3&&num2>num4&&num2>num5){
        printf("O maior: %d", num2);
    }
    if (num3>num1&&num3>num2&&num3>num4&&num3>num5){
        printf("O maior: %d", num3);
    }
    if (num4>num1&&num4>num2&&num4>num3&&num4>num5){
        printf("O maior: %d", num4);
    }
    if (num5>num1&&num5>num2&&num5>num3&&num5>num4){
        printf("O maior: %d", num5);
    }

    /* Menor */

    if (num1<num2&&num1<num3&&num1<num4&&num1<num5){
        printf("O menor: %d", num1);
    }
    if (num2<num1&&num2<num3&&num2<num4&&num2<num5){
        printf("O menor: %d", num2);
    }
    if (num3<num1&&num3<num2&&num3<num4&&num3<num5){
        printf("O menor: %d", num3);
    }
    if (num4<num1 && num4<num2 && num4<num3 && num4<num5){
        printf("O menor: %d", num4);
    }
    if (num5<num1 && num5<num2 && num5<num3 && num5<num4){
        printf("O menor: %d", num5);
    }

    return 0;
}

