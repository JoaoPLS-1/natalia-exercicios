#include <stdio.h>
int main(){
    int i, vetor[10];
    printf("Preenchendo o vetor: ");
    for(i=0;i<10;i++){
        printf("Posicao [%d]. Digite um valor: \n", i);
        scanf("%d", &vetor[i]);
    }
    printf("Vetor inteiro preenchido: \n");
    printf(" --- Contagem comecando do 0 --- \n");
    for(i=0;i<10;i++){
        printf("Posicao [%d]: %d \n",i, vetor[i]);
    }
    printf("Numeros do vetor que sao pares: \n");
    printf(" --- Contagem comecando do 0 --- \n");
    for(i=0;i<10;i++){
        if(vetor[i] % 2 == 0){

            printf("Posicao [%d]: %d \n",i, vetor[i]);
        }
    }
    return 0;
}