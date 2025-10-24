#include <stdio.h>
int main(){
    int num, i;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    printf("Contegem crescente: ");
    for(i=0;i<=num;i++){
        printf("%d, ", i);
    }
    printf("FIM!");


    return 0;
}