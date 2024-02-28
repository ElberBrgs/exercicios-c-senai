#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	system("cls || clear");
	printf("\n===SENAI===\n");
	fflush(stdin);
}

int main(){
	setlocale(LC_ALL,"");
	
	//Declarando variáveis
	int primeiroNumero,segundoNumero;
	int media,soma,produto,menorValor,maiorValor;
	
	//
	printf("Digite o primeiro valor: ");
	scanf("%i",&primeiroNumero);
	printf("Digite o segundo valor: ");
	scanf("%i",&segundoNumero);	
	cabecalho();
	
	//
	media = (primeiroNumero + segundoNumero)/2;
	soma = primeiroNumero + segundoNumero;
	produto = primeiroNumero * segundoNumero;
	
	
	//
	printf("Média: %i \n",media);
	printf("Soma: %i \n",soma);
	printf("Produto: %i \n",produto);
	
	//
	
	
	return 0;
}
