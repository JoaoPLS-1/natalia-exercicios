#include <stdio.h>

int main(){

    float maior = 0 ,menor = 9999, n[8];
    int i = 0;

    while (i<8)
    {
       printf("Digite o preco do produto [%d]: ",i +1);
       scanf("%f", &n[i]); 
       if(n [i]>maior){
        maior = n[i];
       }
        else if (n[i] < menor){
            menor = n[i];
        
       }
       i++;
    }
    i = 0;
    printf("Precos digitados: \n");
    printf("[");
     while (i<8){
        printf("%.2f ; ", n[i]);
        i++;
     }
     printf("] \n");
    printf("O maior preco digitado foi: %.2f \n", maior);
    printf("O menor preco digitado foi: %.2f \n", menor);
    return 0;
}