#include <stdio.h>

int main() {
    char c;

    printf("Digite um caractere: ");
    c = getchar ();

    if (c >= 97 && c <= 122) { // é minúscula
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            printf("É uma vogal minúscula.\n");
        else
            printf("É uma consoante minúscula.\n");
    } else {
        printf("É outro caractere (não minúsculo).\n");
    }

    return 0;
}
