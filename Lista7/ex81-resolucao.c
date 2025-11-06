
#include <stdio.h>

int main()
{
    int i,idade[8], maior,cont;
    float mediafinal,media;
    maior = 0;
    mediafinal = 0;
    media = 0;
    cont = 0;
    for(i=0;i<8;i++){
    printf("Pessoa [%d]", i+1);
    printf("Digite sua idade: ");
    scanf("%d", &idade[i]);
    media = (media + idade[i]);
        cont++;
            if(idade[i] >= maior){
        maior = idade[i];
    }
        
    }
    mediafinal = media / cont;
    printf("\n \n Media de idade das pessoas cadastradas: %.0f anos \n", mediafinal);
    printf("\n \n Pessoas cadastradas com mais de 25 anos nas posicoes: \n");
    for(i=0;i<8;i++){
        if (idade[i] > 25){
            printf("POSICAO [%d]: %d anos \n", i, idade[i]);
        }
    }
    printf("\n \n Maior idade digitada, nas posicoes: \n");
    for(i=0;i<8;i++){
        if(maior == idade[i]){
             printf("%d anos. POSICAO[%d] \n", maior, i);
        }
    }

    return 0;
}