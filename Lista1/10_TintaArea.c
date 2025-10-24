
#include <stdio.h>

int main()
{
    float altura, largura, area, tinta;
    printf("Digite a altura da parede: ");
    scanf("%f", &altura);
    printf("Digite a largura da parede: ");
    scanf("%f", &largura);
    area = largura * altura;
    tinta = area / 2;
    printf("Area da parede: %.2f metros \n Altura: %.2f metros \n Largura: %.2f metros \n Quantidade de tinta necessaria: %.2f litros", area, altura, largura,tinta);
    return 0;
}
