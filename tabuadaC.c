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
	int i,numero;
	
	//Pedindo valores
	printf("Digite um número: ");
	scanf("%d",&numero);
	cabecalho();
	
	//Exibindo tabuada (até 10)
	for(i=1;i<=10;i++){
		printf("%d x %d = %d \n",numero,i,numero*i);
	}
	
	return 0;
}
