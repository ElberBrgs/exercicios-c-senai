#include<stdio.h>
#include<stdlib.h>

int main(){
	
	//Declarando variáveis
	int primeiroNum,segundoNum;
	int soma,subtracao,multiplicacao,divisao;
	
	//Pedindo valores
	printf("Digite o primeiro número: ");
	scanf("%i",&primeiroNum);
	printf("Digite o segundo número: ");
	scanf("%i",&segundoNum);
	//Fazendo cálculos
	soma = primeiroNum + segundoNum;
	subtracao = primeiroNum - segundoNum;
	multiplicacao = primeiroNum * segundoNum;
	divisao = primeiroNum / segundoNum;
	//Exibindo resultados
	printf("Soma: %i \n",soma);
	printf("Subtracao: %i \n",subtracao);
	printf("Multiplicação: %i \n",multiplicacao);
	printf("Divisão: %i \n",divisao);
	
	return 0;
	
}
