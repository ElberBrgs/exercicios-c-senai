#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float mediaTotal(float n1,float n2){
	float media;	
	media = (n1 + n2)/2;
	return media;
}

float resultadoMedia(float media){
	if(media >= 7){
		printf("Aprovado!",media);
	}else{
		printf("Reprovado!",media);
	}
	return media;
}

int main(){
	setlocale(LC_ALL,""); 
	
	float primeiroNum,segundoNum,media,resultado;
	
	printf("Digite o primeiro número: ");
	scanf("%f",&primeiroNum);
	
	printf("Digite o segundo número: ");
	scanf("%f",&segundoNum);
	
	media = mediaTotal(primeiroNum,segundoNum);
	resultado = resultadoMedia(media);
	
	printf("\nMédia: %.2f \n",media);
	
	return 0;
}
