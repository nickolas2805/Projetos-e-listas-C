#include<stdio.h>

int main()
{
    float prova1,prova2,prova3,prova4,provafinal,media;
    printf("Digite a nota das provas bimestrais:");
    scanf("%f%f%f%f",&prova1,&prova2,&prova3,&prova4);

    media=(prova1+prova2+prova3+prova4)/4.0;

    if (media>=7.0){
        printf("\nAluno aprovado com media:%.2f\n",media);
    } else if (media<=5.0){
        printf("\nAluno reprovado com media:%.2f\n",media);
    } else {
        printf("Digite a nota da prova final:");
        scanf("%f",&provafinal);
        media=(provafinal*0.4)+(media*0.6);
        if (media>=5.5){
            printf("\nAluno aprovado com media:%.2f\n",media);
        } else {
            printf("\nAluno reprovado com media:%.2f\n",media);
        }
    }

    return 0;
}
