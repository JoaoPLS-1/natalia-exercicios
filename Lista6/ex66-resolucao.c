#include <stdio.h>
int main (){
    int i, num;
    printf("Digite um numero para tabuada: ");
    scanf("%d", &num);
    for(i=0;i<=10;i++){
        printf("%d x %d = %d \n", num, i, num*i);
    }


    return 0;
}