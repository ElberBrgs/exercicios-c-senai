#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float mediaTotal(float n1,float n2){
	float media;	
	media = (n1 + n2)/2;
	return media;
	
}


int main(){
	setlocale(LC_ALL,""); 
	
	float primeiroNum,segundoNum,media;
	
	printf("Digite o primeiro número: ");
	scanf("%f",&primeiroNum);
	
	printf("Digite o segundo número: ");
	scanf("%f",&segundoNum);
	
	media = mediaTotal(primeiroNum,segundoNum);
	
	printf("\nMédia: %.2f \n",media);
	
	return 0;
}
