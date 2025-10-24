#include <stdio.h>
int main(){
    int idade, sexo, maioridade,homem,mulherjovem,testador, contando;
    float media, mediafinal;
    testador = 1;
    contando = 1;
    maioridade = 0;
    mulherjovem = 100;
    while(testador == 1){
        printf("Pessoa [%d] \n Digite seu sexo: \n [1 - Homem      2 - Mulher]:", contando);
        scanf("%d", &sexo);
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        if(idade>maioridade){
            maioridade = idade;
        }
        if(sexo == 1){
            homem++;
            media = media + idade;
        }
        else if(sexo == 2 && idade < mulherjovem){
            mulherjovem = idade;
        }
        printf("Deseja continuar? \n [1 - Sim    2 - Nao]:");
        scanf("%d", &testador);
        if(testador == 1){
            contando++;
        }
    }
    mediafinal = media / contando;
    printf("Informacoes: \n ");
    printf("Maior idade lida: %d \n", idade);
    printf("Homens cadastrados: %d \n", homem);
    if(mulherjovem == 100){
        printf("Idade da mulher mais jovem: 0");
    }
    printf("Idade da mulher mais jovem: %d \n", mulherjovem);
    printf("Media de idade dos homens: %.0f \n", mediafinal);
    printf("Total de pessoas que participaram: %d", contando);

    return 0;
}