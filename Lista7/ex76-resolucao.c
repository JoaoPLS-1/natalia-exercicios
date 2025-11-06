#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
    int i, vetor[7];
    srand(time(NULL));
    printf("Gerando numero aleatorio: \n");
    for(i=0;i<7;i++){
        vetor[i] = rand()%100;
    printf("Numero POSICAO [%d]: %d \n", i, vetor[i]);
    }

    return 0;
}