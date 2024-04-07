#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void somar(int n1,int n2){
	int somaFunction;	
	somaFunction = n1 + n2;
	printf("\nSoma: %i \n ",somaFunction);
	
}

int main(){
	setlocale(LC_ALL,""); 
	
	int primeiroNum,segundoNum;
	
	printf("Digite o primeiro número: ");
	scanf("%i",&primeiroNum);

	printf("Digite o segundo número: ");
	scanf("%i",&segundoNum);
	
	somar(primeiroNum,segundoNum);	
	
	return 0;
}
