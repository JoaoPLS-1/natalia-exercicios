#include <stdio.h>

int main() {
    int n = 6, soma = 0;

    printf("6 ");
    soma = soma + n;

    n = n + 2;

    while (n <= 100) {
        printf("+ %d ", n);
        soma = soma + n;
        n = n + 2;
    }

    printf("= %d\n", soma);
    return 0;
}
