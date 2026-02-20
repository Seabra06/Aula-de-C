#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    float numero;
    float dobro;

    printf("Digite o numero que você quer saber o dobro \n");
    scanf("%f", &numero);

    dobro = numero * 2;

    printf("O numero %.2f é \n", dobro);

    return 0;
}
