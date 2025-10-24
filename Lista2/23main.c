#include <stdio.h>

int main()
{
    char nome[100];
    int sexo;
    float valor, desconto,valor_final;
    printf("Digite seu nome: ");
    scanf(" %99[^\n]", nome);
    printf("Digite seu sexo: [1 - HOMEM /2 - MULHER]");
    scanf("%d", &sexo);
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    switch(sexo){
        case 1:
        desconto = valor * 0.05;
        valor_final = valor - desconto;
        printf("Sr. %s , sua compra total: R$ %.2f \n Alcançando um desconto de 5%%: R$ %.2f", nome, valor, valor_final);
        break;
        case 2:
        desconto = valor * 0.13;
        valor_final = valor - desconto;
        printf("Sra. %s , sua compra total: R$ %.2f \n Alcançando um desconto de 13%%: R$ %.2f", nome, valor, valor_final);
        break;
        default:
        printf("Opcao de sexo invalida!");
    }
    return 0;
}
