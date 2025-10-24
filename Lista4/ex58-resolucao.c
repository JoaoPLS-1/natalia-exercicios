#include <stdio.h>
int main() {
    int idade, aluno;
    float media, mediafinal;
    idade = 0;
    aluno = 0;
    media = 0;
    while(idade != 999){
        printf("Digite a idade do aluno [%d] ou 999 para finalizar o programa: ", aluno+1);
        scanf("%d", &idade);
        if(idade != 999){
            aluno++;
            media = media + idade;
        }

    }
    mediafinal = media / aluno;
    printf("A media das idades da turma: %.0f anos \n", mediafinal);
    printf("A quantidade de alunos da turma:  %d  alunos\n", aluno);


    return 0;
}