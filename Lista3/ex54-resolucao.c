#include <stdio.h>

int main(){
    float altura, peso, media = 0;
    int mais90 = 0, menos50 = 0, mais190 = 0, i = 1;
    while (i <= 7){
        printf("Digite o peso [%d]: ", i);
        scanf("%f", &peso);
        printf("Digite a altura [%d]: ", i);
        scanf("%f", &altura);
        media = media + altura;
        if(peso > 90){
            mais90++;
        }
        if(peso < 50 && altura < 1.60){
            menos50++;
        }
        if(altura > 1.90 && peso > 100){
            mais190++;
        }
        i++;
    }
    media = media / (i - 1);
    printf("Media de altura do grupo: %.1f", media);
    printf("Quantas pessoas pesam mais de 90 do grupo: %d", mais90);
    printf("Quantas pessoas pesam menos de 50kg e tem menos de de 1.60m grupo: %d", menos50);
    printf("Quantas pessoas medem mais 1.90m e pesam mais de 100kg do grupo: %d", mais190);


    return 0;
}