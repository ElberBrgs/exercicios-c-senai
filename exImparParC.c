#include<stdio.h>
#include<stdlib.h>

int main(){
	int numero;
	
	printf("Digite um número: ");
	scanf("%i",&numero);
	
	if(numero % 2 == 0){
		printf("Número par.");
	}else{
		printf("Número ímpar.");
	};
	
	return 0;
}
