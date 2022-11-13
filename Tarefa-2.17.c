#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "Portuguese");
  /* Exercício 2.17*/
  /* a */
  printf("1 2 3 4 \n");
  /* b */
  printf("%d %d %d %d \n",1,2,3,4);
  /* c */
  printf("1 ");
  printf("2 ");
  printf("3 ");
  printf("4");
}

