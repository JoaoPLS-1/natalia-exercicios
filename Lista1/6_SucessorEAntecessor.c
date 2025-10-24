/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, antecessor,sucessor;
    printf("Digite um numero: ");
    scanf("%d", &num);
    antecessor = num-1;
    sucessor = num+1;
    printf("O antecessor do numero: %d \n O sucessor do numero: %d",antecessor,sucessor);
    

    return 0;
}
