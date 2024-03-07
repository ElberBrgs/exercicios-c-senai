#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void verificarParOuImpar(int numero){
	
	
	if(numero % 2 == 0){
		printf("Número par.");
	}else{
		printf("Número ímpar.");
	}
	
}


int main(){
	setlocale(LC_ALL,"");
	
	int numero;
	
	printf("Digite um número: ");
	scanf("%i",&numero);
	
	verificarParOuImpar(numero);
	
	return 0;
}
