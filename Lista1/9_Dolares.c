#include <stdio.h>

int main()
{
    float dinheiro, dolar;
    printf("Digite quanto voce tem na carteira: ");
    scanf("%f", &dinheiro);
    dolar = dinheiro / 3.45;
    printf("Voce pode comprar %.2f dolares!", dolar);

    return 0;
}
