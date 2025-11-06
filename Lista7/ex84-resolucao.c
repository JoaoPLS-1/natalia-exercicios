#include <stdio.h>
int main(){
    int i, idade[9];
    char nome [9] [100];
    printf("Preenchendo Vetor: \n");
    for(i=0;i<9;i++){
        printf("Digite o nome [%d]:", i+1);
         if(i > 0) getchar();
        scanf("%99[^\n]", nome[i]);
        printf("Digite a idade [%d]: ", i+1);
        scanf("%d", &idade[i]);

    }
    printf("Pessoas menores de idade do vetor preenchido: \n");
    for(i=0;i<9;i++){
        if(idade[i] < 18){
            printf("Pessoa [%d] -> Posicao [%d] no vetor: \n Nome: %s \n Idade: %d \n", i+1, i, nome[i], idade[i]);
        }
    }



    return 0;
}