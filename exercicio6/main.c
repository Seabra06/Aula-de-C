#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    float numero;

    printf("Digite o valor real: \n");
    scanf("%f", &numero);

    printf("A raiz quadrada de %.2f é %.2f \n", numero, sqrt(numero));
    return 0;
}
