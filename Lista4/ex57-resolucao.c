#include <stdio.h>
int main(){
    int sexo, homens = 0, mulheres = 0, i = 1,progresso = 1;
    float salario, salariototal_homens = 0, salariototal_mulheres = 0;
    do{
        printf("Digite o sexo [%d]: \n 0 - Homem \n 01 - Mulher:", i);
        scanf("%d", &sexo);
        printf("Digite o salario [%d]: ", i);
        scanf("%f", &salario);
        if (sexo == 0){
            homens++;
            salariototal_homens = salariototal_homens + salario;
        }
        else if (sexo == 01){
            mulheres++;
            salariototal_mulheres = salariototal_mulheres + salario;
        }
        else{
            printf("Sexo invalido!");
        }
        printf("Deseja continuar? \n 1 - Sim \n 2 - Nao: ");
        scanf("%d", &progresso);
        if (progresso == 1){
            continue;
        }
        else if (progresso == 0){
            break;
        }
        i++;
    }while(progresso == 1);
    printf("Total de funcionarios HOMENS que inseriram informacao: %d\n", homens);
    printf("Salario coletivo total dos HOMENS que inseriram informacao: R$ %.2f\n", salariototal_homens);
    printf("Total de funcionarios MULHERES que inseriram informacao: %d\n", mulheres);
    printf("Salario coletivo total das MULHERES que inseriram informacao: R$ %.2f\n", salariototal_mulheres);
    return 0;
}