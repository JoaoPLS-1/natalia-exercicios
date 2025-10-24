
#include <stdio.h>

int main()
{
    int dias;
    float salario;
    printf("Digite o numero de dias trabalhados no mes: ");
    scanf("%d", &dias);
    salario = (8*25) * dias;
    printf("Voce trabalha: %d dias \n Ganha: %.2f reais por dia.\n Ganhando um total de: %.2f reais", dias, 25.0*8.0, salario);

    return 0;
}
