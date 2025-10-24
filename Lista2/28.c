
#include <stdio.h>

int main()
{
    float largura, cumprimento, area;
    printf("Digite a LARGURA do terreno:");
    scanf("%f", &largura);
    printf("Digite o CUMPRIMENTO do terreno:");
    scanf("%f", &cumprimento);
    area = largura*cumprimento;
    if(area<100){
        printf("Seu terreno tem: \n %.2f m de cumprimento \n %.2f m de largura \n %.2f m² de area\n Sendo um TERRENO POPULAR", cumprimento, largura,area);
    }
    else if(area<=500){
        printf("Seu terreno tem: \n %.2f m de cumprimento \n %.2f m de largura \n %.2f m² de area\n Sendo um TERRENO MASTER", cumprimento, largura, area);
    }
    else if(area>500){
        printf("Seu terreno tem: \n %.2f m de cumprimento \n %.2f m de largura \n %.2f m² de area\n Sendo um TERRENO VIP", cumprimento, largura, area);
    }

    return 0;
}
