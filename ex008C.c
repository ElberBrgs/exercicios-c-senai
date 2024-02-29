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
	
	//Pedindo valores
	printf("Digite o primeiro valor: ");
	scanf("%i",&primeiroNumero);
	printf("Digite o segundo valor: ");
	scanf("%i",&segundoNumero);	
	cabecalho();
	
	//Calculando valores
	media = (primeiroNumero + segundoNumero)/2;
	soma = primeiroNumero + segundoNumero;
	produto = primeiroNumero * segundoNumero;
	
	//Testando maior e menor valor e exibindo dados
	if(primeiroNumero>segundoNumero){
		maiorValor = primeiroNumero;
		menorValor = segundoNumero;
	}else{
		maiorValor = segundoNumero;
		menorValor = primeiroNumero;	
	}
	
	if(primeiroNumero == segundoNumero){
		printf("Valores iguais! \n");
	}else{
		printf("Menor valor: %i \n",menorValor);
		printf("Maior valor: %i \n",maiorValor);
	}

	//Exibindo dados
	printf("Média: %i \n",media);
	printf("Soma: %i \n",soma);
	printf("Produto: %i \n",produto);
	
	
	return 0;
}
