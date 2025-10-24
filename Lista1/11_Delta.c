#include <stdio.h>

int main()
{
    float a,b,c,delta;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    delta = (b*b) - 4*a*c;
    printf("Valor de a: %.2f \n Valor de b: %.2f \n Valor de c: %.2f \n VALOR DE DELTA: %.2f",a ,b ,c, delta);

    return 0;
}
