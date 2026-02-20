#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    //DECLARAÇAO DE VARIÁVEIS
    int numero;
    int numero2;
    int sub;

    //ENTRADA DE DADOS
    printf("Digite o primeiro valor: \n");
    scanf("%d", &numero);
    printf("Digite o segundo valor: \n");
    scanf("%d", &numero2);

    sub = numero - numero2;



    //PROCESSO DE DADOS
    if ((numero - numero2) % 2 == 0){
        printf("O numero %d é par. \n", sub);
    }
    else {
        printf("O numero %d é impar. \n", sub);
    }

    return 0;

}
