
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int valor, player;
    srand(time(NULL));
    valor = rand() % 5 + 1;
    printf("Tente advinhar o palpite de um numero de 1 a 5: ");
    scanf("%d", &player);
    if(player == valor){
        printf("Parabens! Voce acertou, o numero era %d", valor);
    }else
    printf("Errou! O numero era: %d. Voce digitou: %d", valor,player);

    return 0;
}
