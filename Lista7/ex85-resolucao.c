#include <stdio.h>
int main(){
    int i, sexo[5];
    float salario[5];
    char nome[5] [100];
    for(i=0;i<5;i++){
        printf("Pessoa [%d]: \n", i+1);
        printf("Digite o nome: \n", i+1);
        if(i > 0) getchar();
        scanf("%99[^\n]", nome[i]);
        printf("Digite o sexo: {1 - Masculino; 2 - Feminino}: \n");
        scanf("%d", &sexo[i]);
        printf("Digite seu salario: \n");
        scanf("%f", &salario[i]);
    }
    printf("Lista \n Mulheres com salario acima de 5000 reais: \n");
    for(i=0;i<5;i++){
        if(sexo[i] == 2 && salario[i] > 5000){
            printf("Pessoa [%d]: \n Nome: %s \n Sexo: Feminino \n Salario: R$ %.2f \n", i+1, nome[i], salario[i]);
        }
    }


    return 0;
}