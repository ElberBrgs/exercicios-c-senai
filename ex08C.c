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
	
	//Declarando vari�veis
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
	printf("M�dia: %i \n",media);
	printf("Soma: %i \n",soma);
	printf("Produto: %i \n",produto);
	
	//
	
	
	return 0;
}
