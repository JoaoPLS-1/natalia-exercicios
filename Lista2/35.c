
#include <stdio.h>

int main()
{
    int tipo, dias;
    float km, preco;
    printf("Digite o tipo de carro: \n 1 - POPULAR \n 2 - LUXO [1, 2]:");
    scanf("%d", &tipo);
    printf("Digite quantos dias de aluguel: ");
    scanf("%d", &dias);
    printf("Digite quantos km foram percorridos:");
    scanf("%f", &km);
    if(tipo == 1){
        if( km <= 100){
        preco = (90 * dias) + (0.20*km);
        }else if(km>100){
        preco = (90*dias) + (0.10*km);
        }
        printf("Tipo de carro: POPULAR \n Dias de aluguel: %d \n Km rodados: %.2f \n Preco: R$%.2f", dias, km, preco);
    }
    else if(tipo == 2){
        if( km <= 200){
        preco = (150 * dias) + (0.30*km);
        }else if(km>200){
        preco = (150*dias) + (0.25*km);
        }
        printf("Tipo de carro: LUXO \n Dias de aluguel: %d \n Km rodados: %.2f \n Preco: R$%.2f", dias, km, preco);
    }
    else{
        printf("Tipo nao existe!");
    }
    
    return 0;
}
