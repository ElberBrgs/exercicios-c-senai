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
	int idade;
	
	//Pedindo dados
	printf("Digite sua idade:");
	scanf("%i",&idade);
	
	//Testando e exibindo dados
	if(idade>=18 && idade <65){
		printf("Voto obrigat�rio.");
	}else{
		printf("Voto opcional.");
	}
	
	return 0;
}
