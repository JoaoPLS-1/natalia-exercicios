
#include <stdio.h>

int main()
{
    float peso, altura, imc;
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    imc = peso / (altura*altura);
    if(imc < 18.5){
        printf("Calculo do seu IMC: %.1f \n Abaixo do peso!", imc);
    }else if(imc < 25){
        printf("Calculo do seu IMC: %.1f \n Peso ideal!", imc);
    }else if(imc < 30){
        printf("Calculo do seu IMC: %.1f \n Sobrepeso!", imc);
    }else if(imc < 40){
        printf("Calculo do seu IMC: %.1f \n Obesidade!",imc);
    }else if(imc > 40){
        printf("Calculo do seu IMC: %.1f \n Obesidade morbida!", imc);
    }
    

    return 0;
}
