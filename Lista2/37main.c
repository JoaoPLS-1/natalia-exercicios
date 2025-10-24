
#include <stdio.h>

int main()
{
    float salario, salario_novo;
    int genero, anos;
    printf("Digite seu SALARIO atual: ");
    scanf("%f", &salario);
    printf("Digite seu GENERO: \n 1 - HOMEM \n 2 - MULHER [1,2]:");
    scanf("%d", &genero);
    printf("Digite quantos ANOS de empresa: ");
    scanf("%d", &anos);
    if(genero == 1){
        if(anos<20){
            salario_novo = salario * 1.03;
            printf("Salario novo com reajuste de 3%%: %.2f \n",salario_novo);
        }else if(anos<30){
            salario_novo = salario * 1.13;
            printf("Salario novo com reajuste de 13%%: %.2f\n",salario_novo);
        }else if(anos>30){
            salario_novo = salario * 1.25;
            printf("Salario novo com reajuste de 25%%: %.2f\n",salario_novo);
        }
        printf("Genero: HOMEM \n");
    }
    else if(genero == 2){
        if(anos<15){
            salario_novo = salario * 1.05;
            printf("Salario novo com reajuste de 5%%: %.2f\n",salario_novo);
        }else if(anos<20){
            salario_novo = salario * 1.12;
            printf("Salario novo com reajuste de 12%%: %.2f\n",salario_novo);
        }else if(anos>20){
            salario_novo = salario * 1.23;
            printf("Salario novo com reajuste de 23%%: %.2f\n",salario_novo);
        }
        printf("Genero: MULHER \n");
    }
    else{
        printf("Genero invalido!");
    }
    printf("Anos de empresa: %d",anos);
    return 0;
}
