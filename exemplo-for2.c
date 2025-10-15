#include <stdio.h>
int main(){
    int tab, limite,i,mult;
    printf("Digite o numero da tabuada: \n");
    scanf("%d", &tab);
    printf("Digite o limite da tabuada: \n");
    scanf("%d", &limite);
    printf(" --- TABUADA de %d ---\n",tab);
    printf("ATE O LIMITE: %d \n", limite);
    for(i = 1; i<=limite; i++){
        mult = tab * i;
        printf("%d x %d = %d \n", tab, i, mult);
    }


    return 0;
}