#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float media;
	int numero,soma=0,contador=0;
	
	printf("Digite um número: ");
	scanf("%i",&numero);
	
	while(numero>0){
		
		contador ++;
		soma += numero;
		
		printf("Digite um número: ");
		scanf("%i",&numero);			
			
	}
	
	if(contador <= 0){
		printf("Não foi informado um número positivo.");
		
	}else{
		//cast
		media = soma/ (float) contador;
		printf("Média: %.2f",media);

	}
	
	return 0;
	
}
