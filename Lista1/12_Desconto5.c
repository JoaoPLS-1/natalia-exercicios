
#include <stdio.h>

int main()
{
    float preco,desconto,pf;
    printf("Digite o preco do seu produto: ");
    scanf("%f", &preco);
    desconto = preco * 0.05;
    pf = preco - desconto;
    printf("Valor original: %.2f \n O preco PROMOCIONAL do seu produto: %.2f", preco, pf);

    return 0;
}
