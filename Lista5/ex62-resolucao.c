#include <stdio.h>
int main(){
    int idade, vinteumoumais,i,j;
    float media, mediafinal;
    j = 1;
    media = 0;
    vinteumoumais = 0;
    i = 1;
    do{
        printf("Pessoa [%d]\n Digite sua idade: \n", j);
        scanf("%d", &idade);
        media = media + idade;
        if(idade >= 21){
            vinteumoumais++;
        }
        printf("Deseja continuar? \n [1 - Sim     2 - Nao]: ");
        scanf("%d", &i);
        if(i == 1){
            j++;
        }
    }while(i == 1);
    mediafinal = media / j;
    printf("Informacoes: \n");
    printf("Total de idades digitadas: %d\n", j);
    printf("Media das idades digitadas: %.0f anos\n ", mediafinal);
    printf("Pessoas com 21 anos ou mais: %d\n", vinteumoumais);


    return 0;
}