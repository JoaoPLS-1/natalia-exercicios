#include <stdio.h>

int main() {
    int i, j, k;
    float A[3][4], B[4][5], C[3][5];

    
    printf("Preenchendo a matriz A (3x4):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    
    printf("\nPreenchendo a matriz B (4x5):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%f", &B[i][j]);
        }
    }

    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            C[i][j] = 0;
        }
    }

    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            for (k = 0; k < 4; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Exibir resultado
    printf("\nMatriz C (3x5) = A x B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%6.2f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
