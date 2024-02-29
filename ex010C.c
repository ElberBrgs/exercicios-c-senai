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
	int idade;
	
	//Pedindo dados
	printf("Digite sua idade:");
	scanf("%i",&idade);
	
	//Testando e exibindo dados
	if(idade>=18 && idade <65){
		printf("Voto obrigatório.");
	}else{
		printf("Voto opcional.");
	}
	
	return 0;
}
