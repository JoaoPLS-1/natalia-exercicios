#include <stdio.h>

int main() {
    float altura[5][10],maior;
    int i, j;

    
    printf("Digite as alturas (em metros) dos atletas:\n");
    for (i=0;i<5;i++) {
        printf("\nDelegação %d:\n", i+1);
        for (j = 0; j < 10; j++) {
            printf("Atleta %d: ", j + 1);
            scanf("%f", &altura[i][j]);
        }
    }

  
    printf("\n------------------------------------------\n");
    printf("Maior altura de cada delegação:\n");

    for (i=0;i<5;i++) {
        maior = altura[i][0]; 
        for (j=1;j<10;j++) {
            if (altura[i][j] > maior) {
                maior = altura[i][j];
            }
        }
        printf("Delegação %d -> Maior altura: %.2f m\n", i+1, maior);
    }

    return 0;
}
