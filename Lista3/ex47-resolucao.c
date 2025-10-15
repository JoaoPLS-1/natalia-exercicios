#include <stdio.h>

int main() {
    int n = 500, soma = 0;

    printf("500 ");
    soma = soma + n;

    n = n - 50;

    while (n >= 0) {
        printf("+ %d ", n);
        soma = soma + n;
        n = n - 50;
    }

    printf("= %d\n", soma);
    return 0;
}
