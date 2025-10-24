#include <stdio.h>
#include <string.h>
int main(){
        int idade, sexo, testador, maisvelha,mulhermaisjovem, homem30, mulher18, contador;
        float media,mediafinal;
        char nome[100],nomeidoso[100], nomemulherjovem[100];
        media = 0;
        maisvelha = 0;
        mulhermaisjovem = 100;
        homem30 = 0;
        mulher18 = 0;
        testador = 1;
        contador = 1;
        while(testador == 1){
            printf("Pessoa [%d] \n Digite seu nome:", contador);
            scanf(" %99[^\n]", &nome);
            printf("Digite sua idade: ");
            scanf("%d", &idade);
            printf("Digite seu sexo: \n [1 - Homem    2 - Mulher]: ");
            scanf("%d", &sexo);
            if(idade > maisvelha){
                strcpy(nomeidoso, nome);
                maisvelha = idade;
            }
            if(sexo == 2 && idade < mulhermaisjovem){
                strcpy(nomemulherjovem, nome);
                mulhermaisjovem = idade;
            }
            media = media + idade;
            if(sexo == 1 && idade > 30){
                homem30++;
            }
            if(sexo == 2 && idade < 18){
                mulher18++;
            }
            printf("Deseja Continuar? \n [1 - Sim      2 - Nao]:");
            scanf("%d", &testador);
            if(testador == 1){
                contador++;
            }
        }
        printf("Informacoes: ");
        printf("Nome da pessoa mais velha: %s\n", nomeidoso);
        printf("Nome da mulher mais jovem: %s\n", nomemulherjovem);
        mediafinal = media / contador;
        printf("Media de idade do grupo: %.0f\n", mediafinal);
        printf("Homens com mais de 30 anos: %d\n", homem30);
        printf("Mulheres menores de 18 anos: %d\n", mulher18);
        

    return 0;
}