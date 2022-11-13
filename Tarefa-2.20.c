#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL, "Portuguese");
  
   /* Exercício 2.20*/
  
  float raio;
  
  printf("Insira o raio do círculo:");
  scanf("%f",&raio);
  
  printf("O diâmetro do círculo é %.2f \n", (raio*2));
  printf("O valor de sua circunferência é %.2f \n", (2*3.14159*raio));
  printf("A área do círculo é %.2f \n", (3.14159*(raio*raio)));
}

