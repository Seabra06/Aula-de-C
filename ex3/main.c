#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    //Declaração e inicialização de variáveis
    float total = 0;
    int cont = 1;
    float nota;

    //Recepção da primeira nota
    printf("Digite a nota do aluno %d (-1 para terminar):\n", cont);

    scanf("%f", &nota);

    while (nota >= 0.0)
    {
        total = total + nota;
        //cont = cont + 1;
        printf("Digite a nota do aluno %d (-1 para terminar):\n", ++cont);
        scanf("%f", &nota);
    }
    total = total / (cont - 1);
    printf("A média dos %d alunos é %.1f.\n", cont - 1, total);
    return 0;
}
