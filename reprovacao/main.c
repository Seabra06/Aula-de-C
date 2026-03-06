#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float faltas;
    float media;

    printf("Qual é a sua porcentagem(%%) de falta?\n");
    scanf("%f", &faltas);

    printf("Qual é a sua Média?.\n");
    scanf("%f", &media);

    if (faltas < 75 && media < 5.0){
        printf("Voce foi reprovado por falta e nota.\n");
    }
    else if(faltas < 75 && media >=5.0){
        printf("Voce foi reprovado por falta.\n");
    }
    else if(faltas >= 75 && media < 5.0){
        printf("Voce foi reprovado por media.\n");
    }
    else{
        printf("Voce foi aprovado!!!!!\n");
    }
    return 0;
}
