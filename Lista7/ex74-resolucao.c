#include <stdio.h>
int main(){
    int i, vetor[10];
    printf("Vetor: \n");
    for(i=0;i<10;i++){
        if (i%2==0){
            vetor[i] = 5;
        }
        else{
            vetor[i] = 3;

        }
        printf("Posicao [%d]: %d \n", i , vetor[i]);
    }


    return 0;
}