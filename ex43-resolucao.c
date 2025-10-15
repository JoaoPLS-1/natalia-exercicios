#include <stdio.h>
int main(){
    int n = 30;
    while(n>=1){

        if(n%4 == 0){
            printf("[%d] ", n);
        }
        else{
            printf("%d ", n);
        }
        
        if(n == 1){
            printf("Acabou!");
        }
        n = n - 1;
    }
return 0;
}