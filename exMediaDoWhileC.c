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
	
	float primeiraNota,segundaNota,media;
	
	do{
		
	printf("Digite a sua primeira nota: ",primeiraNota);
	scanf("%f",&primeiraNota);
	cabecalho();
	 
	}while(primeiraNota  < 0 || primeiraNota > 10);
	
	do{
	
	printf("Digite a sua segunda nota: ",segundaNota);
	scanf("%f",&segundaNota);
	cabecalho();
	
	}while(segundaNota < 0 || segundaNota > 10);
	
	media = (primeiraNota + segundaNota)/2;
	
	printf("Média: %.1f \n",media);
	printf("FIM.");
	
	return 0;
}
