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
	
	int j;

	for(j=100;j>=1;j--){
		printf("%d \n",j);
	}
	
	return 0;
}
