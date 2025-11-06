
#include <stdio.h>

int main()
{
    int i,j, matrix [5] [5];
    printf("Digite os valores da matriz 5x5: \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Elemento [%d] [%d]: \n",i, j);
            scanf("%d", &matrix[i] [j]);
        }
    }
    printf("Matriz completa:\n");
    for (i=0;i<5;i++) {
        for (j=0;j<5;j++) {
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz apenas com números ímpares (pares viram 0):\n");
    for (i=0;i<5;i++) {
        for (j=0;j<5;j++) {
            if (matrix[i][j]%2!=0)
                printf("%3d ", matrix[i][j]);
            else
                printf("  0 ");
        }
        printf("\n");
    }
    return 0;
}