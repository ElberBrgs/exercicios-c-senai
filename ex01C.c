#include<stdio.h>
#include<stdlib.h>

int main(){
	
	//Declarando vari�veis
	int primeiroNum,segundoNum;
	int soma,subtracao,multiplicacao,divisao;
	
	//Pedindo valores
	printf("Digite o primeiro n�mero: ");
	scanf("%i",&primeiroNum);
	printf("Digite o segundo n�mero: ");
	scanf("%i",&segundoNum);
	//Fazendo c�lculos
	soma = primeiroNum + segundoNum;
	subtracao = primeiroNum - segundoNum;
	multiplicacao = primeiroNum * segundoNum;
	divisao = primeiroNum / segundoNum;
	//Exibindo resultados
	printf("Soma: %i \n",soma);
	printf("Subtracao: %i \n",subtracao);
	printf("Multiplica��o: %i \n",multiplicacao);
	printf("Divis�o: %i \n",divisao);
	
	return 0;
	
}
