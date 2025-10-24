#include <stdio.h>

int main()
{
    float salario, novosalario,aumento;
    printf("Digite seu salario");
    scanf("%f", &salario);
    aumento = salario * 1.15;
    novosalario = aumento + salario;
    printf("Salario antigo: %.2f \n Aumento: %.2f \n Salario com aumento: %.2f", salario, aumento, novosalario);

    return 0;
}
