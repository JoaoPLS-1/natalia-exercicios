#include <stdio.h>

int main()
{
    int n = 0, contagem = 1, soma = 0;
    printf("Digite 7 numeros inteiros:\n");

    while (contagem <= 7)
    {
        printf("Numero %d: ", contagem);
        scanf("%d", &n);
        if (contagem < 7){
            printf("%d + %d \n", n , soma);
        }
        
        else{
            printf("%d + %d", n, soma);
        }
        soma = soma + n;

        contagem++;
    }
       printf(" = %d\n", soma);
    return 0;
}
