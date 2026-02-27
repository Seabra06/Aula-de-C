#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");

    // Declaração de Variaveis
    float total;
    int cont;
    float nota;

    //Inicialização de Variaveis
    total = 0;
    cont = 0;

    //Entrada de Dados e Processamento
    while(cont < 10)
    {
        printf("Digite a nota do aluno %d:\n", cont + 1);
        scanf("%f", &nota);
        total = total + nota;
        cont = cont + 1;
    }
    /*
     Reaproveitamento da Variável total para armarzanar
     o valor da Média
    */

    total = total / cont;
    printf("A média das notas é %f.\n", total);
    return 0;
}
