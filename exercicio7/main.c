#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    float a;
    float b;
    float c;
    float x1;
    float x2;

    printf("Digite o A :\n");
    scanf("%f", &a);

    printf("Digite o B :\n");
    scanf("%f", &b);

    printf("Digite o C :\n");
    scanf("%f", &c);

    x1 = (-b + sqrt(b * b - 4 * a * c))/2 * a;

    x2 = (-b - sqrt(b * b - 4 * a * c))/2 * a;

    printf("O valor de X1 é : %.2f \n", x1);

    printf("O valor de X2 é : %.2f \n", x2);
    return 0;
}
