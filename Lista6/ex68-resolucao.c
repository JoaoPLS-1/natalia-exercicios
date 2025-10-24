#include <stdio.h>
int main(){
    int sexo, mulher, homem100,i,j;
    float peso,mediafinal, mediamulheres,maiorpesohomem;
    mediafinal = 0;
    maiorpesohomem = 0;
    mediamulheres = 0;
    mulher = 0;
    j = 0;
    for(i=1;i<=8;i++){
        printf("Pessoa [%d] \n Digite seu peso: ", i);
        scanf("%f", &peso);
        printf("Digite seu sexo: \n [1 - Homem    2 - Mulher]: ");
        scanf("%d", &sexo);
        if(sexo == 2){
            mulher++;
            mediamulheres = mediamulheres + peso;
            j++;
        }
        if(sexo == 1 ){
            if(peso > maiorpesohomem){
                maiorpesohomem = peso;

            }
            if(peso > 100){
                homem100++;
            }
        }
    }
    mediafinal = mediamulheres / j;
    printf("Informacoes: \n");
    printf("Mulheres cadastradas: %d \n", mulher);
    printf("Homens com mais de 100kg: %d \n", homem100);
    printf("Media de peso entre as mulheres: %.2f \n", mediafinal);
    printf("Maior peso entre os homens: %.2f", maiorpesohomem);
    

    return 0;
}