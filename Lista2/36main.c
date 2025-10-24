#include <stdio.h>

int main()
{
    float hora, dinheiro;
    int pontos;
    printf("Digite quantas horas de atividade voce teve por mes: ");
    scanf("%f", &hora);
    if(hora<10){
        pontos = hora * 2;
    }else if(hora<20){
        pontos = hora * 5;
    }else if(hora > 20){
        pontos = hora * 10;
    }
    dinheiro = pontos * 0.05;
    printf("Voce teve %.2f de horas de atividade por mes \n Conseguindo um total de %d pontos \n Total de dinheiro obtido: R$ %.2f", hora, pontos, dinheiro);
    return 0;
}
