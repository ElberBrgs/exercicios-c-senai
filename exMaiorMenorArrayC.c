#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

int main(){
	setlocale(LC_ALL,"");
	
	int numeros[5],i,maiorValor= INT_MIN,menorValor= INT_MAX;
	
	for(i=0;i<5;i++){
		printf("Digite o %dº número:",i+1);
		scanf("%d",&numeros[i]);
		
		if(numeros[i]>maiorValor){
			maiorValor= numeros[i];
		}
		if(numeros[i]<menorValor){
			menorValor= numeros[i];
		}	
		
	}
	
	printf("Maior número: %i\n",maiorValor);
	printf("Menor número: %i",menorValor);
	
	return 0;
}
