
#include <stdio.h>

int main()
{
    char nome[100];
    float salario, aumento;
    int anos;
    printf("Digite seu nome: ");
    scanf(" %99[^\n]", nome);
    printf("Digite seu salario: ");
    scanf("%f", & salario);
    printf("Digite quantos anos voce tem de empresa: ");
    scanf("%d", &anos);
    if(anos<3){
        aumento = salario * 1.03;
        salario_novo = salario + aumento;
        printf("Colaborador(a): %s \n Salario: %.2f \n Anos de empresa: %d \n Salario atual com reajuste de 3%%: %.2f",nome, salario, anos, aumento);
    }
    else if(anos<10){
        aumento = salario * 1.125;
        printf("Colaborador(a): %s \n Salario: %.2f \n Anos de empresa: %d \n Salario atual com reajuste de 12.5%%: %.2f",nome, salario, anos, aumento);
    }
    else if(anos>=10){
        aumento = salario * 1.2;
        printf("Colaborador(a): %s \n Salario: %.2f \n Anos de empresa: %d \n Salario atual com reajuste de 20%%: %.2f",nome, salario, anos, aumento);
    }

    return 0;
}
