
    #include <stdio.h>
    
    int main()
    {
    int ano
    printf("Digite um determinado ano: ");
    scanf("%d", &ano);
    if(ano%4 == 0){
        printf(" Ano digitado: %d \n O ano digitado é bissexto!", ano);
    }
    else{
        printf(" Ano digitado: %d \n O ano digitado NAO é bissexto!", ano);
    }

    return 0;
}
