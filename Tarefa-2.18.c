#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "Portuguese");
  /* Exerc�cio 2.18*/
  
  int num1, num2;
  
  printf("Digite dois n�meros:");
  scanf("%d%d",&num1,&num2);
  
  if (num1>num2)
  	printf("O n�mero %d � maior",num1);
  	
  if (num2>num1)
  	printf("O n�mero %d � maior",num2);
  	
  if (num1==num2)
  	printf("Esses n�meros s�o iguais");
}

