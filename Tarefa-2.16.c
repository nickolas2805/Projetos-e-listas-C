#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "Portuguese");
  
  /*Escreva um programa que pe�a ao usu�rio para digitar dois n�meros, obtenha-os do usu�rio e
imprima a soma, o produto, a diferen�a, o quociente e o resto da divis�o dos dois n�meros.*/
  
  int num1, num2, soma, produto, diferenca, quociente, resto;
  
  printf("Digite dois n�meros:");
  scanf("%i %i",&num1,&num2);
  
  soma=(num1+num2);
  produto=(num1*num2);
  diferenca=(abs(num1-num2));
  quociente=(num1/num2);
  resto=(num1%num2);
  
  printf("\n A soma de %i e %i �: %i", num1, num2, soma);
  printf("\n O produto de %i e %i �: %i", num1, num2, produto);
  printf("\n A diferen�a entre %i e %i �: %i", num1, num2, diferenca);
  printf("\n O quociente de %i e %i �: %i", num1, num2, quociente);
  printf("\n O resto de %i e %i �: %i", num1, num2, resto);

}

