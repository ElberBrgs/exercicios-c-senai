#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define BANDAS 2
#define INTEGRANTES 2 

int main(){
	setlocale(LC_ALL,"");
	
	char bandas[BANDAS][200],integrantes[INTEGRANTES][200];
	int i,j;
	
	for (i=0;i<BANDAS;i++){ 
		printf("Digite a %dª banda:\n",i+1);
		scanf("%s",&bandas[i]);
		fflush(stdin);
			
		for(j=0;j<INTEGRANTES;j++){
			printf("Digite o %dº integrante:\n",j+1);
			scanf("%s",&integrantes[i][j]);
		}
	}
	
	printf("===Exibindo resultados===\n");
	
	for(i=0;i<BANDAS;i++){ //Laço para exibição
		printf("%dª banda: %s\n",i+1,bandas[i]);
		
		fflush(stdin);
		
		for(j=0;j<INTEGRANTES;j++){
		printf("%dº integrante: %s\n",j+1,integrantes[j]);
		}
	}
		
	return 0;
}
