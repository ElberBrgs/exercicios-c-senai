#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	system("cls || clear");
	printf("\n===Contador===\n");
	fflush(stdin);
}

int main(){
	
	//Define o idioma 
	setlocale(LC_ALL,"");
	
	//Declarando variáveis
	int numero;
	
	//Pedindo dados
	cabecalho();
	printf("Digite o número: ");
	scanf("%i",&numero);
	
	//Adicionando contagem
	do{
		numero = numero +1;
		printf("%i \n",numero);
		
	}while(numero<10);
	
	return 0;
}
