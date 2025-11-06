
#include <stdio.h>

int main()
{
   int i, j, a[3] [4], b[3] [4];
   printf("Digite os valores da matriz A: \n");
   for(i=0;i<3;i++){
       for(j=0;j<4;j++){
           printf("A [%d] [%d]: \n", i, j);
           scanf("%d", &a[i] [j]);
       }
   }
       printf("\n \n Matiz A: \n");
    for(i=0;i<3;i++) {
        for(j=0;j<4;j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n \n Matriz B triplo de A: \n");
    for (i=0;i<3;i++) {
        for (j=0;j<4;j++) {
            b[i][j] = a[i][j] * 3;
            printf("%4d ", b[i][j]);
        }   
        printf("\n");
    }
    return 0;
}