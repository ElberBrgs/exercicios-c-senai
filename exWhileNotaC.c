#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float nota=0,media=0,soma=0;
	int i;
	
	for(i = 1; i<=2;i++){
		
	
	printf("\nDigite a %iª nota: ",i);
	scanf("%f",&nota);
	
	
	while(nota<0 || nota >10){
		
		printf("\nDigite a %iª nota: ",i);
		scanf("%f",&nota);	
		
	}
	
	soma += nota;
	
	}
	
	media = soma/2;
	
	system("clear || cls");
	
	printf("\nMédia: %.1f \n",media);
	
	return 0;
}
