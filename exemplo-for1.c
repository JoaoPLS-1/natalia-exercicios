#include <stdio.h>

int main(){
    int valor, final, i;
    printf("Digite o valor inicial da contagem: \n");
    scanf("%d", &valor);
    printf("Digite o valor final: \n");
    scanf("%d", &final);
    for (i=valor; i<=final; i++){
        printf("%d  ",i);
    }

    return 0;
}