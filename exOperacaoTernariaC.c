#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void verificarParOuImpar(int numero){
	
	//Operação ternária.
	numero %2 == 0 ? printf("Número Par.") : printf("Número Ímpar.");
	
}


int main(){
	setlocale(LC_ALL,"");
	
	int numero;
	
	printf("Digite um número: ");
	scanf("%i",&numero);
	
	verificarParOuImpar(numero);
	
	return 0;
}
