 
#include <stdio.h>

int main()
{
   int i,j, m[2] [2], det;
   printf("Digite os valores da matriz 2x2:\n");
    for(i=0;i<2;i++) {
        for(j=0; j<2;j++) {
            printf("M[%d][%d]: \n", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    printf("Matriz M:\n");
    for (i=0;i<2;i++) {
        for (j=0;j<2;j++) {
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
    det = (m[0][0] * m[1][1]) - (m[0][1] * m[1][0]);
     printf("\nCálculo: (%d * %d) - (%d * %d)\n",
           m[0][0], m[1][1], m[0][1], m[1][0]);
            printf("Determinante = %d\n", det);

    return 0;
}