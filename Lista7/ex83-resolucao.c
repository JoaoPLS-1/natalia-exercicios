#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
    int i,j,aux,vetor[20];
    srand(time(NULL));
    printf("Numeros gerados: \n ");
    for(i=0;i<20;i++){
        vetor[i] = rand() % 100;
        printf("Posicao[%d]: %d \n",i , vetor[i]);
    }
    printf("\n \nOrdenando de forma crescente: \n");
    for(i=0;i<19;i++){
        for(j=i+1;j<20;j++){
            if(vetor [i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    for (i = 0; i < 20; i++) {
    printf("Posicao[%d]: %d \n", i, vetor[i]);
}
    

    return 0;
}