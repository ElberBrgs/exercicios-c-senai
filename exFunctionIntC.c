#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//USAR RETURN COM BASE NO TIPO DE NUMERO CASO TENHA CÁLCULOS MATEMÁTICOS
int somar(int n1,int n2){
	int soma;	
	soma = n1 + n2;
	return soma;
	
}


int main(){
	setlocale(LC_ALL,""); 
	
	int primeiroNum,segundoNum,soma;
	
	printf("Digite o primeiro número: ");
	scanf("%i",&primeiroNum);

	printf("Digite o segundo número: ");
	scanf("%i",&segundoNum);
	
	soma = somar(primeiroNum,segundoNum);	
	
	
	printf("\nSoma: %i \n ",soma);
	
	return 0;
}
