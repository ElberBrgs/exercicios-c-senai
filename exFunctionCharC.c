#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char* verificarParOuImpar(int numero){
	char resposta [200];
	
	if(numero % 2 == 0){
		strcpy(resposta,"Número Par.");
	}else{
		strcpy(resposta,"Número Ímpar.");
	}
	
}

int main(){
	setlocale(LC_ALL,"");
	
	int numero;
	char resultado[200];
	
	printf("Digite um número: ");
	scanf("%i",&numero);
	
	strcpy(resultado, verificarParOuImpar(numero));
	printf("Resultado: %s \n",resultado);
	
	return 0;
}
