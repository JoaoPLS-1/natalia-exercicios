#include <stdio.h>
int main(){
    int n = 0;
    while(n<=18){
        printf("%d \n", n );
        
        if(n == 18){
            printf("Acabou!");
        }
        n = n+3;
    }
return 0;
}