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
	
	float nota;
	
	do{
		
	printf("Digite a sua nota: ");
	scanf("%f",&nota);
	
	cabecalho();
		
	}while(nota < 0 || nota > 10);
	
	printf("Nota: %.1f \n",nota);
	printf("FIM.");
	
	return 0;
}
