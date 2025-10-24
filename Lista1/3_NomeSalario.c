#include <stdio.h>
#include <string.h>
int main()
{
    char nome[100];
    float salario;
    printf("Digite seu nome: ");
    scanf("%99[^\n]", &nome);
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    printf("Nome do funcionario: %s \n Salario: %.2f \n O funcionario %s tem um salario de %.2f em Junho",nome, salario, nome, salario);
    

    return 0;
}
