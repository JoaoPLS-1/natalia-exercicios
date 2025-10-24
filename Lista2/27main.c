/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    printf("Digite a NOTA 1:");
    scanf("%f", &nota1);
    printf("Digite a NOTA 2:");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    if(media < 5){
        printf("Voce obteve uma media de: %.2f . Abaixo do esperado. \n Voce foi REPROVADO!",media);
    }
    else if(media < 7){
        printf("Voce obteve uma media de: %.2f . Nao foi suficiente. \n Voce esta de RECUPERACAO!",media);
    }
    else if(media >= 7){
        printf("Voce obteve uma media de: %.2f . Obteve a nota esperada. \n Voce foi APROVADO!",media);
    }

    return 0;
}
