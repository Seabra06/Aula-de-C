#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");
    int idade;
    printf("Qual é a sua idade?\n");
    scanf("%d", &idade);

    if (idade < 16){
        printf("Voce ainda nao pode votar.\n");
    }
    else if (idade < 18){
        printf("Seu Voto é opcional.\n");
    }
    else if (idade <= 70){
        printf("Seu Voto é obrigatorio.\n");
    }
    else{
        printf("Seu Voto é opcional.\n");
    }
    return 0;
}
