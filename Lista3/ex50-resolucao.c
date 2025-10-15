#include <stdio.h>
#include <time.h>
int main (){

    int n, i = 0, div3 =0,acima5 =0;
    srand(time(NULL));
    printf("Sorteando 20 numeros de 1 a 10");
    printf("Os 20 numeros sorteados: \n");
    while(i < 20){
        n = rand () % 10 + 1;
        printf("%d \n", n);
        i++;
         if (n > 5){
            acima5++;
        }
        if (n % 3 == 0){
            div3++;
        }
    }
    printf("\nQuantidade acima de 5: %d\n", acima5);
    printf("Quantidade divisiveis por 3: %d", div3);
    return 0;

}