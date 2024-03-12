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
	cabecalho();
	
	int contador = 0;
	char continua;
	
	do{
		printf("Repetindo...\n");
		
		contador = contador + 1;
		
		printf("Tecle 's' se deseja continuar\n ");
		scanf("%c",&continua);
		fflush(stdin);
		
	}while(continua == 's');
	
	printf("O bloco foi repetido %d vezes.",contador);
	
	return 0;
}
