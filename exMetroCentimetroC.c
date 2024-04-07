#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float converterCm(float cMetro,float metro){
	
	cMetro = metro * 100;
	
	return cMetro;
}

int main(){
	setlocale(LC_ALL,"");
	
	float metros,centimetros;
	
	printf("Metros: ");
	scanf("%f",&metros);
	
	metros = converterCm(centimetros,metros);
	
	printf("Em centímetros: %.2f",metros);
	
	return 0;
}
