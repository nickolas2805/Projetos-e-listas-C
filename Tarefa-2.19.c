#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL, "Portuguese");

   /* Exercício 2.19*/

  int num1, num2, num3, soma, produto;
  float media;

  printf("Entre com três inteiros diferentes:");
  scanf("%d %d %d",&num1,&num2,&num3);

  soma=num1+num2+num3;
  media=soma/3;
  produto=num1*num2*num3;

  printf("A soma é %d \n", soma);
  printf("A média é %.2f \n", media);
  printf("O produto é %d \n", produto);

  if (num1>num2 && num1>num3)
  	printf("O maior é %d \n", num1);

  if (num2>num1 && num2>num3)
  	printf("O maior é %d \n", num2);

  if (num3>num2 && num3>num1)
  	printf("O maior é %d \n", num3);

  	/* menor */

  if (num1<num2 && num1<num3)
  	printf("O menor é %d", num1);

  if (num2<num1 && num2<num3)
  	printf("O menor é %d", num2);

  if (num3<num2 && num3<num1)
  	printf("O menor é %d", num3);
  }

