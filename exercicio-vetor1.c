#include <stdio.h>
int main(){
    int a[5], b[5], c[5], i;
    for(i=0; i<5; i++){
        printf("Valores [%d]. \n Digite o valor A:", i+1);
        scanf("%d", &a[i]);
        printf("Digite o valor B:", i);
        scanf("%d", &b[i]);
        c[i] = a[i] + b[i];
    }
    printf("Soma dos valores: \n");
    for(i=0; i<5; i++){
        printf("%d + %d = %d \n ",a[i],b[i],c[i]);
    }


    return 0;
}