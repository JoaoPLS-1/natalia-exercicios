#include <stdio.h>
int main(){
    int i, vetor[15], num, ant, prox;
    num = 1;
    ant = 0;
    printf("Vetor:");
    for(i=0;i<=15;i++){
            vetor[i] = num;
            printf("Posicao[%d]: %d \n", i, vetor[i]);
            prox = num + ant;
            ant = num;
            num = prox;
    }



    return 0;
}