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
	
	system("clear || cls");
	media = soma/contador;
	
	printf("Média: %.2f",media);
	
	return 0;
	
}
