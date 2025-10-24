#include <stdio.h>

int main()
{
	int ano,teste_ano,alistamento;
	printf("Digite seu ano de nascimento: ");
	scanf("%d", &ano);
	teste_ano = 2025 - ano;
	if(teste_ano < 18){
	alistamento = 18 - teste_ano;
	printf("Voce tem %d anos. Faltam %d anos para se alistar", ano, teste_ano);	
	}
	else{
	    alistamento = teste_ano - 18;
	printf("Voce tem %d anos. Já se passaram %d aos do alistamento", ano, alistamento);
	}	

}