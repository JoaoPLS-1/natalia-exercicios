#include <stdio.h>

int main()
{
    float nota1,nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("Nota 1: %.1f \n Nota 2: %.1f \n A media entre %.1f e %.1f: %.1f", nota1, nota2, nota1, nota2,media);

    return 0;
}
