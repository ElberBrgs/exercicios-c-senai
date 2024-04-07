#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 999

int main(){
	setlocale(LC_ALL,"");
	
	int numeros[TAM],somaPositivos=0;
	int i,quantidadeNegativos=0,quantidadePositivos=0,par=0,impar=0;
	
	for(i=0;i<TAM ;i++){
		
		printf("Digite o %iº número: \n",i+1);
		scanf("%i",&numeros[i]);
		
		if(numeros[i]>0){
			somaPositivos += numeros[i];
			quantidadePositivos++;
			if(numeros[i] %2==0){
				par++;
			}else{
				impar++;
			}
		}
		if(numeros[i]<0){
			quantidadeNegativos++;
		}
		if(numeros[i]==0){
			break;
		}
	}

	system("clear || cls");
	
	printf("\n===Exibindo resultados===\n");
	printf("Quantidade de números positivos: %i\n",quantidadePositivos);

	printf("Quantidade de números positivos pares: %i\n",par);	
	printf("Quantidade de números positivos ímpares: %i\n",impar);	
	
	printf("Quantidade de números negativos: %i\n",quantidadeNegativos);
	printf("Soma dos números positivos: %i\n",somaPositivos);
	
	printf("Números inseridos no total: %i",i);
		
	return 0;
}
