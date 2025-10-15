#include <stdio.h>
int main(){
    int n, incremento, final;
    printf("Digite o inicio da contagem: ");
    scanf("%d", &n);
    printf("Digite o final da contagem: ");
    scanf("%d", &final);
    printf("Digite o incremente (De quantos em quantos vai aumentar ou diminuir [se o inicio for maio que o final]):");
    scanf("%d", &incremento);
    if(n<final){
        while(n<=final){
            printf("%d  ", n );
            n = n + incremento;
        }

    }
    else if(n>final){
            while(n>=final){
            printf("%d  ", n );
            n = n - incremento;
        }
    }
    else{
        printf("%d  ", n );
    }
    printf("Acabou!");
return 0;
}