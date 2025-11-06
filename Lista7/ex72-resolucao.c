#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    printf("Vetor preenchido:\n");
    for(i = 0; i < 10; i++) {
        vetor[i] =(i + 1)*5;
        printf("Posição [%d]  %d\n", i, vetor[i]);
    }

    

    return 0;
}
