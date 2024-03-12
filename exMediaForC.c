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
	
	int nota,i,soma,media;
	
	for(i=1;i<=4;i++){
		printf("Escreva a %iª nota: ",i);
		scanf("%i",&nota);
		soma = soma + nota;
	}
	
		media = soma/4;
		printf("Média: %i",media);	
	
	return 0;
}
