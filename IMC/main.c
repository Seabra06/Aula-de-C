#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float massa;
    float alt;
    float imc;

    printf("Qual seu peso corporal? \n");
    scanf("%f",&massa);
    printf("Qual sua altura corporal? \n");
    scanf("%f",&alt);

    imc = massa/(alt*alt);

    printf("Seu IMC é de %.1f\n", imc);
    if(imc<17){
        printf("Muito abaixo do peso");
    }else if(imc<18.5){
        printf("Abaixo do peso");
    }else if(imc<25.0){
        printf("Peso adequado");
    }else if(imc<30.0){
        printf("Sobrepeso");
    }else if(imc<35.0){
        printf("Obesidade I");
    }else if(imc<40){
        printf("Obesidade II");
    }else{
        printf("Obesidade III");
    }
    return 0;
}
