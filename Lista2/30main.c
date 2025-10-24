
#include <stdio.h>

int main()
{
    float reta1, reta2, reta3, menor;
    printf("Digite o PRIMEIRO segmento de reta: ");
    scanf("%f", &reta1);
    printf("Digite o SEGUNDO segmento de reta: ");
    scanf("%f", &reta2);
    printf("Digite o TERCEIRO segmento de reta: ");
    scanf("%f", &reta3);
    if(reta1 < (reta2 + reta3) && reta2 < (reta1+reta3) && reta3 < (reta2+reta1)){
    printf("E possivel formar um triangulo com os segmentos de reta. \n")   ;     
    printf("Os 3 segmentos: \n %.1f \n %.1f \n%.1f \n",reta1, reta2, reta3);
    printf("Sendo os 3 lados individualmente menor que a soma dos outros 2");
        if(reta1 == reta2 && reta1 == reta1 == reta3){
            printf("O triangulo formado foi um triangulo EQUILATERO. Possuindo 3 lados iguais.");
        }else if(reta1 == reta2 || reta2 == reta3 || reta1 == reta3){
        printf("O triangulo formado foi um triangulo ISOSCELES. Possuindo 2 lados iguais.");
        }else if(reta1 != reta2 && reta1 != reta3 && reta2 != reta3){
            printf("O triangulo formado foi um triangulo ESCALENO. Possuindo todos os lados lados iguais.");
        }
    }else{
        printf("Nao foi possivel formar um triangulo.");
    }
    
    

    return 0;
}
