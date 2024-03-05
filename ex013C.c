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
	
	for(i=1;i<=20;i++){
		if(i %2 !=0 ){
			printf("%d \n",i);
		}
	}
	
	return 0;
}
