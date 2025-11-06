    
#include <stdio.h>

int main()
{
    int i, termo, razao, soma;
    soma = 0;
    printf("Digite o primeiro termo da P.A: \n");
    scanf("%d", &termo);
    printf("Digite a razão da P.A: \n");
    scanf("%d", &razao);
    printf("Sequencia de 10 termos da P.A \n");
    for(i=1;i<=10;i++){
        printf("Termo: [%d]: %d \n", i, termo);
        soma = termo + soma;
        termo = termo + razao;
    }
    printf("Soma dos termos formados na P.A: %d", soma);

    return 0;
}