
#include <stdio.h>

int main()
{
    float valor, salario, prestacao, mensal,limite;
    int anos;
    printf("Digite o valor total da casa: ");
    scanf("%f", &valor);
    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("Digite em quantos anos vai pagar: ");
    scanf("%d", &anos);
    mensal = (anos * 12);
    prestacao = valor / mensal;
    limite = salario * 0.3;
    printf("Prestacao mensal: %.2f \n Limite permitido: %.2f \n", prestacao, limite);
    if(prestacao <= limite){
        printf("Emprestimo APROVADO! \n");
    }else{
        printf("Emprestimo NEGADO, prestacao ultrapassa o limite permitido");
    }
    return 0;
}
