#include <stdio.h>

int main()
{
    float distancia;
    printf("Digite a distancia em metros: ");
    scanf("%f", &distancia);
    printf("%.3f km\n", distancia / 1000);
    printf("%.3f hm\n", distancia / 100);
    printf("%.3f dam\n", distancia / 10);
    printf("%.3f dm\n", distancia * 10);
    printf("%.3f cm\n", distancia * 100);
    printf("%.3f mm\n", distancia * 1000);

    return 0;
}
