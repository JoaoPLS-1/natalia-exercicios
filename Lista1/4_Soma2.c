#include <stdio.h>

int main()
{
    int num1, num2,soma;
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    printf("A soma dos valores: %d + %d = %d", num1, num2, soma);

    return 0;
}
