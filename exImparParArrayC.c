#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"");
	
	int numeros [6],i,par=0,impar=0;
	
	
	for(i=0;i<6;i++){
		printf("Digite o %dº número: ",i+1);
		scanf("%d",&numeros[i]);
		
	
	if(numeros[i] %2 == 0){
		par ++;	
	}else {
		impar ++;		
	}
	
	}
	
	printf("\n===RESULTADOS===\n");
	
	for(i = 0 ; i <6; i++){
		printf("%dº número: %d \n",i+1,numeros[i]);
	}
	
	
	printf("Números par: %d\n",par);	
	printf("Números ímpar: %d",impar);

		
	return 0;
}
