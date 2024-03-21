#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 2 // Constante de tamanho.


int main(){
	setlocale(LC_ALL,"");
	
	float numeros[TAM],somaPositivos=0;
	int i,quantidadeNegativos=0;
	
	
	
	for(i=0;i<TAM ;i++){
		
		printf("Digite o %iº número: \n",i+1);
		scanf("%f",&numeros[i]);
		
		if(numeros[i]>0){
			somaPositivos += numeros[i];
		}
		if(numeros[i]<0){
			quantidadeNegativos++;
		}
		
	}
	
	printf("\n===Exibindo resultados===\n");
	printf("Quantidade de números negativos: %i\n",quantidadeNegativos);
	printf("Soma dos números positivos: %.1f",somaPositivos);
	
		
	return 0;
}
