
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int player, pc;
    srand(time(NULL));
    printf("Escolha o que voce quer jogar: \n 1 - Pedra \n 2 - Papel \n 3 - Tesoura [1, 2, 3]: ");
    scanf ("%d", &player);
    pc = rand() % 3 + 1;
    printf("Você escolheu %d e o computador %d\n", player, pc);
    if (player == pc){
    printf("Empate!\n");
    }
    else if ((player == 1 && pc == 3) ||(player == 2 && pc == 1) ||(player == 3 && pc == 2)){
    printf("Você ganhou!\n");
    }
    else
    printf("Computador ganhou!\n");

    return 0;
}
