#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
    int i, vetor[30], chave,vezes;
    srand(time(NULL));
    vezes = 0;
    printf("Sorteando numero aleatorio: \n");
    for(i=0;i<30;i++){
        vetor[i] = rand() % 16;
        printf("Numero POSICAO [%d]: %d \n", i, vetor[i]);
    }
    printf("Digite o numero {chave}: \n");
    scanf("%d", &chave);
    for(i=0;i<30;i++){
        if(vetor[i] == chave){
            printf("Chave [%d]encontrada! Posicao: [%d] \n",chave, i);
            vezes++;
            
        }
    }
    printf("Sua chave foi encontrada: %d vezes!", vezes);
    

    return 0;
}