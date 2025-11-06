#include <stdio.h>

int main() {
    int i, num = 1, anterior = 1, proximo;

    printf("Sequência de Fibonacci: ");

    for(i = 1; i <= 10; i++) {
        printf("Termo [%d]: \n", i);
         if (i <= 2) {
            proximo = 1; 
        } else {
            proximo = num + anterior;
            num = anterior;
            anterior = proximo;
        }
        printf("%d \n", proximo);
    }
    

    return 0;
}
