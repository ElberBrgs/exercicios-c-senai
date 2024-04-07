#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 5 // Constante de tamanho.

int main(){
	setlocale(LC_ALL,"");
	
	char pessoas[TAM][200];
	int i,idade[TAM];
	
	for(i=0;i< TAM ;i++){
		printf("Digite a %dª pessoa: ",i+1);
		scanf("%s",&pessoas[i]);
		printf("Digite a idade: ",i+1);
		scanf("%d",&idade[i]);
	}
	
	printf("\n===Exibindo resultados===\n");
	
	for(i=0; i<TAM;i++){
		printf("Nome: %s\n",pessoas[i]);
		printf("Idade: %d\n",idade[i]);
	}
	
	return 0;
}
