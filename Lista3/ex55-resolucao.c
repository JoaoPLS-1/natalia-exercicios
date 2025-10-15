#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int valor, player,i = 4;
    srand (time(NULL));
    valor = rand() % 10 + 1;
    while(i >= 1 ){

        printf("Tente advinhar o palpite de um numero de 1 a 10: \n TOTAL de [%d] tentativas: \n", i);
        scanf("%d", &player);
        if(player == valor){
            printf("Parabens! Voce acertou, o numero era %d.", valor);
            break;
        }else{
            printf("Errou!. Voce digitou: %d \n",player);
        }
        i--;
        if ( i == 0){
            printf("Acabaram as tentativas! Que pena.");
        }
    }

    return 0;
}
