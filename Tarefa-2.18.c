#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "Portuguese");
  /* Exercício 2.18*/
  
  int num1, num2;
  
  printf("Digite dois números:");
  scanf("%d%d",&num1,&num2);
  
  if (num1>num2)
  	printf("O número %d é maior",num1);
  	
  if (num2>num1)
  	printf("O número %d é maior",num2);
  	
  if (num1==num2)
  	printf("Esses números são iguais");
}

