#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    float numero;
    float por;

    printf("Digite o valor real: \n");
    scanf("%f", &numero);

    por = numero * 1.10;

    printf("O valor com 10%% é: %.2f \n", por);
    return 0;
}
