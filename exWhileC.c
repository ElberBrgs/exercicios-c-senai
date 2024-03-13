#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float nota;
	
	printf("Digite uma nota: ");
	scanf("%f",&nota);
	
	//While precisa ser inicializado antes, diferentemente do Do While.
	
	while(nota<0 || nota >10){
		
		printf("Digite uma nota: ");
		scanf("%f",&nota);
		
	}
	
	printf("Nota informada: %.1f \n",nota);
	
	return 0;
}
