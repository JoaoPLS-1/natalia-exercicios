#include <stdio.h>
int main(){
    int n[1000], soma = 0,i = 0,j =0;
    do{
        printf("Digite um numero: ");
        scanf("%d", &n[i]);
        if(n[i] != 1111){
            soma = soma + n[i];
        }
        i++;
    } while(n[i-1] != 1111);
    while(j<i){
        if (n[j] != 1111)
        printf("+ %d ",n[j]);
        j++;
    }
    printf("= %d", soma);


    return 0;
}