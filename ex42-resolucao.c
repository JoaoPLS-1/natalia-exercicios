#include <stdio.h>
int main(){
    int n, cond;
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &n);
    cond = 1;
    while(cond<=n){
        printf("%d  ", cond );
        
        if(cond == n){
            printf("Acabou!");
        }
        cond++;
    }
return 0;
}