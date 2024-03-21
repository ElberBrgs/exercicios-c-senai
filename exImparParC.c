#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 6 // Constante de tamanho.


int main(){
	setlocale(LC_ALL,"");
	
	int numeros [TAM],i,par=0,impar=0;
	
	
	for(i=0;i< TAM ;i++){
		printf("Digite o %dº número: ",i+1);
		scanf("%d",&numeros[i]);
		
	numeros[i] %2 == 0 ? par++ : impar++;
	
	}
	
	printf("\n===RESULTADOS===\n");
	
	for(i = 0 ; i < TAM ; i++){
		printf("%dº número: %d \n",i+1,numeros[i]);
	}
	
	
	printf("Números par: %d\n",par);	
	printf("Números ímpar: %d",impar);

		
	return 0;
}
