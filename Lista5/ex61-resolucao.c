#include <stdio.h>
int main(){
    int i;
    i = 0;
    do{
        printf("%d  ", i);
        i = i + 3;
    }while(i<=30);
    printf("Acabou!");

    return 0;
}