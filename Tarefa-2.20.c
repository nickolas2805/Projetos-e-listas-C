#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL, "Portuguese");
  
   /* Exerc�cio 2.20*/
  
  float raio;
  
  printf("Insira o raio do c�rculo:");
  scanf("%f",&raio);
  
  printf("O di�metro do c�rculo � %.2f \n", (raio*2));
  printf("O valor de sua circunfer�ncia � %.2f \n", (2*3.14159*raio));
  printf("A �rea do c�rculo � %.2f \n", (3.14159*(raio*raio)));
}

