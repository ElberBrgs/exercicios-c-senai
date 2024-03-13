#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float nota=0,media=0,soma=0;
	int i,contador=0;
	
	for(i = 1; i<=3;i++){
		
	
	printf("\nDigite a %iª nota: ",i);
	scanf("%f",&nota);
	
	
	while(nota<0 || nota >10){
		
		printf("\nDigite a %iª nota: ",i);
		scanf("%f",&nota);	
		
	}
	
	soma += nota;
	contador ++;
	
	}
	
	media = soma/contador;
	
	if(media >=7){
		printf("Aprovado.");
	}else if(media >=5){
		printf("Recuperação.");
	}else{
		printf("Reprovado.");
	}
	
	
	printf("\nMédia: %.1f \n",media);
	
	return 0;
}
