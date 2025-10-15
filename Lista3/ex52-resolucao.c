#include <stdio.h>

int main(){
    int idade, mais18 = 0, menos5 =0, maior = 0, i = 1;
    float media = 0;
    while(i<=10){
        printf("Digite a idade [%d]: ", i);
        scanf("%d", &idade);
        media = media + idade;
        if(idade > 18){
            mais18++;
        }
        if(idade < 5){ 
            menos5++;
        }
        if(idade > maior){
            maior = idade;
        }
        i++;
    }
    media = media / (i - 1);
    printf("A media de idade do grupo: %.1f \n", media);
    printf("A quatidade de pessoas maiores de 18 anos do grupo: %d \n", mais18);
    printf("A quantidade de pessoas menores que 5 anos do grupo: %d \n", menos5);
    printf("A maior idade do grupo: %d", maior);


    return 0;
}