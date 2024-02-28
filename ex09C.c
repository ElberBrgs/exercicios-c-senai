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
	
	//
	int primeiroNum,segundoNum,soma,subtracao,multi,divisao;
	
	//
	printf("Digite o primeiro número: ");
	scanf("%i",&primeiroNum);
	printf("Digite o segundo número: ");
	scanf("%i",&segundoNum);
	cabecalho();
	
	//
	soma = primeiroNum + segundoNum;
	subtracao = primeiroNum - segundoNum;
	multi = primeiroNum * segundoNum;
	divisao = primeiroNum / segundoNum;
	
	//
	cabecalho();
	printf("Primeiro número: %i \n",primeiroNum);
	printf("Segundo número: %i \n",segundoNum);
	printf("Soma: %i \n",soma);
	printf("Subtração: %i \n",subtracao);
	printf("Multiplicação: %i \n",multi);
	printf("Divisão: %i \n",divisao);
	
	
	return 0;
}
