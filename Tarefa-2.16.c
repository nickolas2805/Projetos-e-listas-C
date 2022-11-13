#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "Portuguese");
  
  /*Escreva um programa que peça ao usuário para digitar dois números, obtenha-os do usuário e
imprima a soma, o produto, a diferença, o quociente e o resto da divisão dos dois números.*/
  
  int num1, num2, soma, produto, diferenca, quociente, resto;
  
  printf("Digite dois números:");
  scanf("%i %i",&num1,&num2);
  
  soma=(num1+num2);
  produto=(num1*num2);
  diferenca=(abs(num1-num2));
  quociente=(num1/num2);
  resto=(num1%num2);
  
  printf("\n A soma de %i e %i é: %i", num1, num2, soma);
  printf("\n O produto de %i e %i é: %i", num1, num2, produto);
  printf("\n A diferença entre %i e %i é: %i", num1, num2, diferenca);
  printf("\n O quociente de %i e %i é: %i", num1, num2, quociente);
  printf("\n O resto de %i e %i é: %i", num1, num2, resto);

}

