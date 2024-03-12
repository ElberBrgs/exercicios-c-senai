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
	
	float nota,soma,media,i;
	
	for(i=1 ;i<=4 ;i++){
	printf("Digite sua %.0fª nota: ",i);
	scanf("%f",&nota);
	soma += nota;
	
	}
	
	media = soma /4;
	printf("Média: %.1f",media);
	
	return 0;
}
