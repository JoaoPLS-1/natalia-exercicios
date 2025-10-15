#include <stdio.h>

int main()
{
    int sexo, idade, homens = 0, mulheres = 0, mulheresmais20 = 0, i = 1;
    float media = 0, mediahome = 0;
    while (i <= 5)
    {
        printf("Digite a idade [%d]: \n", i);
        scanf("%d", &idade);
        printf("Digite o sexo [%d]:  \n 0 - Homem \n 01 - Mulher", i);
        scanf("%d", &sexo);
        if (sexo == 0)
        {
            homens++;
            mediahome = mediahome + idade;
        }
        else if (sexo == 01)
        {
            mulheres++;

            if (idade > 20)
            {
                mulheresmais20++;
            }
        }
        else{
            printf("Sexo invalido! Use 0 ou 01.\n");
        }
        media = media + idade;
        i++;
    }
    media = media / (i - 1);
    if (homens > 0) {
        mediahome = mediahome / homens; 
    } else {
        mediahome = 0; 
    }
     printf("\n--- RESULTADOS ---\n");
    printf("Homens cadastrados: %d\n", homens);
    printf("Mulheres cadastradas: %d\n", mulheres);
    printf("Media de idade do grupo: %.2f\n", media);
    printf("Media de idade dos homens: %.2f\n", mediahome);
    printf("Mulheres com mais de 20 anos: %d\n", mulheresmais20);

    return 0;
}