#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define BANDAS 3
#define INTEGRANTES 5 

int main(){
	setlocale(LC_ALL,"");
	
	char bandas[BANDAS][200]; // Vetor com a quantidade de bandas.
	char integrantes[BANDAS][INTEGRANTES][200]; //Matriz com a quantidade de bandas e integrantes.
	int i,j;
	
	for (i=0;i<BANDAS;i++){ 
		printf("Digite a %dª banda:\n",i+1);
		gets(bandas[i]);
		
		for(j=0;j<INTEGRANTES;j++){
			printf("Digite o %dº integrante da %dº banda:\n",j+1,i+1);
			gets(integrantes[i][j]);
		}
	}
	
	system("clear || cls");
	printf("===Exibindo resultados===\n");
	
	for(i=0;i<BANDAS;i++){ 
		printf("%dª banda: %s\n",i+1,bandas[i]);
		
		for(j=0;j<INTEGRANTES;j++){
		printf("%dº integrante da %dª banda: %s\n",j+1,i+1,integrantes[i][j]);
		}
	}
		
	return 0;
}
