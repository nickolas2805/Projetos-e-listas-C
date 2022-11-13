#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, num3;
    float media;

    printf("Digite tres numeros inteiros:");
    scanf("%d %d %d",&num1,&num2,&num3);

    media=(num1+num2+num3)/3.0;

    printf("\nA media dos tres e:%.2f\n",media);
    return 0;
}
