#include <stdio.h>
int main()
{
    int i, m[1][10], soma = 0;
    printf("Preenchendo a matriz M: \n");
    for (i = 0; i < 10; i++)
    {
        printf("M [0] [%d]: \n", i);
        scanf("%d", &m[0][i]);
        if (i % 2 == 0)
        {
            soma = soma + m[0][i];
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%4d \n", m[0][i]);
    }
    printf("Somando os elementos das colunas pares: \n");
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("Coluna [%d]: %d \n", i, m[0][i]);
        }
    }
    printf("Somando: ");
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d + ", m[0][i]);
        }
    }
    printf(" = %d", soma);

    return 0;
}