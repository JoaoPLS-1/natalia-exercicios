#include <stdio.h>
int main(){
    int n = 100;
    while(n>=0){
        printf("%d  ", n );
        
        if(n == 0){
            printf("Acabou!");
        }
        n = n - 5;
    }
return 0;
}