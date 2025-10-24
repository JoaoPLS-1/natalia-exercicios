#include <stdio.h>

int main()
{
    float num, dobro, terca;
    printf("Digite um numero real: ");
    scanf("%f", &num);
    dobro = num * 2;
    terca = num / 3;
    printf("O dobro de %.2f: %.2f \n A terca parte de %.3f: %.3f", num, dobro,num,terca);

    return 0;
}
