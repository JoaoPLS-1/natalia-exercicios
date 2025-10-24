
#include <stdio.h>

int main()
{
    float velocidade, multa;
    
    printf("Digite a velocidade do carro: ");
    scanf("%f", &velocidade);
    if(velocidade>80){
        printf("Voce foi MULTADO por limite de velocidade! \n");
        multa = (velocidade - 80) * 5;
        printf("Sua multa deu um total de: R$ %.2f",multa);
    }

    return 0;
}
