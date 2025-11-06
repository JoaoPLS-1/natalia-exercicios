#include <stdio.h>
int main()
{
    int i, j;
    float totalmes[12] = {0}, totalsemana[4] = {0}, totalano = 0, vendas[12][4];
    printf("Preenchendo vendas do ANO: \n");
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Mes [%d] Semana [%d]: \n", i+1, j+1);
            scanf("%f", &vendas[i][j]);
            totalmes[i] = totalmes[i] + vendas[i][j];
            totalsemana[j] = totalsemana[j] + vendas[i][j];
            totalano = totalano + vendas[i][j];
        }
    }
    printf("TOtal por mes: \n");
    for (i = 0; i < 12; i++)
    {
        printf("Mês %2d: R$ %.2f\n", i +1 , totalmes[i]);
    }
    printf("TOTAL POR SEMANA (no ano todo)\n");
    for (j = 0; j < 4; j++)
    {
        printf("Semana %d: R$ %.2f\n", j + 1, totalsemana[j]);
    }
    printf("TOTAL ANUAL\n");
    printf("Total vendido no ano: R$ %.2f\n", totalano);

    return 0;
}