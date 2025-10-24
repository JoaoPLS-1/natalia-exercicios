
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Digite o primeiro numero INTEIRO: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero INTEIRO: ");
    scanf("%d", &num2);
    if(num1>num2){
        printf("Voce digitou: \n %d \n %d O PRIMEIRO numero digitado foi o maior (%d) \n",num1,num2,num1);
    }
    else if(num1<num2){
        printf("Voce digitou: \n %d \n %d O SEGUNDO numero digitado foi o maior (%d) \n",num1,num2,num2);
    }
    else if( num1 == num2){
        printf("Voce digitou: \n %d \n %d NAO ha numero maior, ambos sao iguais.",num1,num2);
    }

    return 0;
}