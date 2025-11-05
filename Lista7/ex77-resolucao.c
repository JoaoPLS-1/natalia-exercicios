#include <stdio.h>
int main(){
    int i,lugar;
    char nome[7] [100];
    for(i=0;i<7;i++){
        printf("Digite o nome da pessoa [%d]: \n", i+1);
         if(i > 0) getchar();
        scanf("%99[^\n]", nome[i]);
    }
    printf("Nomes na ordem inversa da inserida: \n");
    lugar = 1;
    for(i=6;i>=0;i--){
        printf("Nome [%d] em [%d] lugar: %s \n", i+1, lugar, nome[i]);
        lugar++;
    }


    return 0;
}