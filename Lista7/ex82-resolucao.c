
#include <stdio.h>

int main()
{
    int i, maior,cont,totalmdalunos;
    float media,mediafinal, nota[10];
    media = 0;
    maior = 0;
    cont = 0;
    totalmdalunos = 0;
    printf("Digite a nota \n");
    for(i=0;i<10;i++){
        printf("Nota do aluno [%d]:", i+1);
        scanf("%f", &nota[i]);
        media = media + nota[i];
        cont++;
        if(nota[i] >= maior){
            maior = nota[i];
        }
    }
    mediafinal = media / cont;
    printf("\n \nNota media da turma: %.0f \n", mediafinal);
    printf("\n \nAlunos acima da media: \n");
    for(i=0;i<10;i++){
        if(nota[i] > mediafinal){
            printf("Aluno [%d] -> com nota: %.2f \n", i, nota[i]);
            totalmdalunos++;
        }
    }
    printf("\n \nTotal de alunos acima da media: %d \n", totalmdalunos);
    printf("\n \nMaiores notas e suas posicoes: \n");
    for(i=0;i<10;i++){
        if(maior == nota[i]){
            printf("%d pontos. POSICAO/ALUNO[%d] \n", maior, i);
        }
    }

    return 0;
}