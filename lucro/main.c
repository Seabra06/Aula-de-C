#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float pCompra;
    float pVenda;

    printf("Qual o preco de compra do produto?\n");
    scanf("%f", &pCompra);

    if (pCompra < 10.0 ) {
        pVenda = pCompra * 1.70;
    } else if (pCompra < 30.0){
        pVenda = pCompra * 1.50;
    }  else if (pCompra < 50.0){
        pVenda = pCompra * 1.40;
    } else {
        pVenda = pCompra * 1.30;
    }
    printf("Seu valro de venda deve ser de %.2f", pVenda);
    return 0;
}
