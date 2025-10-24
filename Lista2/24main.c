
#include <stdio.h>

int main()
{
    float distancia, valor;
    printf("Digite a distancia da viagem que deseja percorrer: ");
    scanf("%f", &distancia);
    if(distancia <= 200){
        valor = distancia * 0.50;
        printf("A distancia total a percorrer: %.2f Km \n O valor total a pagar: R$%.2f", distancia, valor);    
        
    }else {
        valor = distancia * 0.45;
printf("A distancia total a percorrer: %.2f Km\n O valor total a pagar: R$%.2f", distancia, valor);
    }

    return 0;
}