#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dividepor10 (int num){
    num /= 10;
    return num;
}

int mudaposicao(int num, int cont){
    int resultado;
    resultado = num%10 * pow(10,cont);
    return resultado;
}

int intercala_numeros(int numero1, int numero2){
    int cont = 0, resultado = 0;

    while (numero1 > 0 || numero2 > 0 ){

    resultado += mudaposicao (numero2,cont++);
    resultado += mudaposicao (numero1,cont++);
    numero1 = dividepor10(numero1);
    numero2 = dividepor10(numero2);
    }

    return resultado;

}

int main(void)
{
    int num1, num2, num_intercalado;
    printf("Digite os dois numeros inteiros para serem intercalados:");
    scanf("%d %d", &num1, &num2);

    num_intercalado = intercala_numeros(num1, num2);

    printf("%d", num_intercalado);
}
