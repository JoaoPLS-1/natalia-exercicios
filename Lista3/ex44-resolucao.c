#include <stdio.h>
int main(){
    int n, incremento, final;
    printf("Digite o inicio da contagem: ");
    scanf("%d", &n);
    printf("Digite o final da contagem: ");
    scanf("%d", &final);
    printf("Digite o incremente (De quantos em quantos vai aumentar):");
    scanf("%d", &incremento);
    while(n<=final){
        printf("%d  ", n );
        
        n = n + incremento;
    }
    printf("Acabou!");
return 0;
}