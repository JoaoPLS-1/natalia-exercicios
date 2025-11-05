#include <stdio.h>
int main(){
    int vetor[10], i;
    printf("Vetor: \n");
    for(i=0;i<10;i++){
        vetor[i] = 9 - i;
        printf("Posicao [%d]: %d \n", i, vetor[i]);
    }



    return 0;
}