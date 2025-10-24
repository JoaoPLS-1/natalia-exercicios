
#include <stdio.h>

int main()
{
    float km, dias,total;
    printf("Digite a quantidade de Km percorrido: ");
    scanf("%f", &km);
    printf("Digite quantos dias o carro foi alugado:  ");
    scanf("%f", &dias);
    total = (dias*90) + (km*0.20);
    printf("O total de dias alugado: %.1f \n Total de km rodado: %.2f \n Total a pagar: %.2f reais", km, dias, total);

    return 0;
}