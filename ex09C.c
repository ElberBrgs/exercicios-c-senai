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
	printf("Digite o primeiro n�mero: ");
	scanf("%i",&primeiroNum);
	printf("Digite o segundo n�mero: ");
	scanf("%i",&segundoNum);
	cabecalho();
	
	//
	soma = primeiroNum + segundoNum;
	subtracao = primeiroNum - segundoNum;
	multi = primeiroNum * segundoNum;
	divisao = primeiroNum / segundoNum;
	
	//
	cabecalho();
	printf("Primeiro n�mero: %i \n",primeiroNum);
	printf("Segundo n�mero: %i \n",segundoNum);
	printf("Soma: %i \n",soma);
	printf("Subtra��o: %i \n",subtracao);
	printf("Multiplica��o: %i \n",multi);
	printf("Divis�o: %i \n",divisao);
	
	
	return 0;
}
