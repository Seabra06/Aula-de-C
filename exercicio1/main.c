#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    //DECLARAÇAO DE VARIÁVEIS
    int num1;
    int num2;
    int soma;
    int sub;
    int mult;
    int div;
    int resto;
    //ENTRADA DE DADOS
    printf("Digite o primeiro valor: \n");
    scanf("%d", &num1);
    printf("Digite o segundo valor: \n");
    scanf ("%d", &num2);
    //PROCESSAMENTO E A SAÍDA DE DADOS
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    resto = num1 % num2;

    printf ("%d + %d = %d \n", num1, num2, soma);
    printf("%d - %d = %d \n", num1, num2, sub);
    printf("%d * %d = %d \n", num1, num2, mult);
    printf("%d / %d = %d \n", num1, num2, div);
    printf("%d %% %d = %d", num1, num2, resto);

    return 0;

}
