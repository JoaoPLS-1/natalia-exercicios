 
#include <stdio.h>

int main()
{
   int i, j, a[4] [4], b[4] [4], soma[4] [4];
   printf("Digite os valores da matriz A: \n");
   for(i=0;i<4;i++){
       for(j=0;j<4;j++){
           printf("A [%d] [%d]: \n", i, j);
           scanf("%d", &a[i] [j]);
       }
   }
       printf("\n \n Matiz A: \n");
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    printf("Digite os valores da matriz B: \n");
    for (i=0;i<4;i++) {
        for (j=0;j<4;j++) {
            printf("B [%d] [%d]: \n", i, j);
           scanf("%d", &b[i] [j]);
        }   
        printf("\n");
    }
    printf("\n \n Matiz B: \n");
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }
    printf("Soma da Matriz A com Matriz B: \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            soma[i] [j] = a[i] [j] + b[i] [j];
             printf("%4d ", soma[i][j]);
        } 
        printf("\n");
        
    }

    return 0;
}