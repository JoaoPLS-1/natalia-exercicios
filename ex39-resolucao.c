#include <stdio.h>
int main(){
    int n = 10;
    while(n>=3){
        printf("%d \n", n );
        
        if(n == 3){
            printf("Acabou!");
        }
        n--;
    }
return 0;
}