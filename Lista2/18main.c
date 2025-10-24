
#include <stdio.h>

int main()
{
    int ano, idade;
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano);
    idade = 2025 - ano;
    if (idade<18){
        printf("Voce tem %d anos. MENOR de idade. NAO pode votar!",idade);
    }
    else
    printf("Voce tem %d anos. MAIOR de idade. PODE votar!",idade);
        
    }
    return 0;
}
