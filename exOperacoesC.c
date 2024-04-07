#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somar(int n1,int n2){
	int soma;
	soma = n1 + n2;
	return soma;
}
int subtrair(int n1,int n2){
	int subtracao;
	subtracao = n1 - n2;
	return subtracao;
}
int dividir(int n1,int n2){
	int divisao;
	divisao = n1 / n2;
	return divisao;
}
int multiplicar(int n1,int n2){
	int multiplicacao;
	multiplicacao = n1 * n2;
	return multiplicacao;
}

int main(){
	setlocale(LC_ALL,"");
	
	int primeiroNum,segundoNum,soma,subtracao,divisao,multiplicacao;
	
	printf("Digite o primeiro número: ");
	scanf("%i",&primeiroNum);
	printf("Digite o segundo número: ");
	scanf("%i",&segundoNum);
	
	soma = somar(primeiroNum,segundoNum);
	subtracao = subtrair(primeiroNum,segundoNum);
	divisao = dividir(primeiroNum,segundoNum);
	multiplicacao = multiplicar(primeiroNum,segundoNum);
	
	printf("\nSoma: %i \n",soma);
	printf("\nSubtração: %i \n",subtracao);
	printf("\nDivisão: %i \n",divisao);
	printf("\nMultiplicação: %i \n",multiplicacao);
	
	return 0;
}
