#include <stdio.h>
int main(){
    int i, vetor[15];
    printf("Preenchendo um vetor: ");
    for(i=0;i<15;i++){
        printf("Posicao [%d]. Digite um valor: \n", i);
        scanf("%d", &vetor[i]);
    }
    printf("Vetor inteiro preenchido: \n");
    for(i=0;i<15;i++){
        printf("Posicao [%d]: %d \n",i, vetor[i]);
    }
    printf("Numeros do vetor multiplos de 10: \n");
    for(i=0;i<15;i++){
        if(vetor[i] % 10 == 0){

            printf("Posicao [%d]: %d \n",i, vetor[i]);
        }
    }
    return 0;
}