#include <stdio.h>
int main(){
    int soma, num, pares,i,j, menor;
    float media, mediafinal;
    media = 0;
    menor = 100000;
    j = 1;
    i = 1;
    soma = 0;
    do{
        printf("Pessoa [%d] \n Digite um numero: ", j);
        scanf("%d", &num);
        soma = soma + num;
        if(num < menor){
            menor = num;
        }
        media = media + num;
        if(num % 2 == 0){
            pares++;
        }
        printf("Deseja continuar? \n [1 - Sim     2 - Nao]: ");
        scanf("%d", &i);
        if(i == 1){
            j++;
        }

    }while(i == 1);
    mediafinal = media / j;
    printf("Informacoes: \n");
    printf("Somatorio de todos os numeros: %d\n", soma);
    printf("Menor valor digitado: %d\n", menor);
    printf("Media de todos os valores digitados: %.2f", mediafinal);


    return 0;
}