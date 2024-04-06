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
	
	
	int i;
	
	for(i=1;i<=100;i++){
		printf("%d \n",i);
	}
	
	return 0;
}
