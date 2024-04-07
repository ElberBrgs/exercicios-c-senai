#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	float notas[3],media,soma=0;
	
	printf("=== Digite suas notas === \n");
	for (i = 0; i<3; i++){
		printf("%dª nota: ",i + 1);
		scanf("%f",&notas[i]);
			
	}
	soma = notas[0] + notas[1] + notas[2];
	
	system("clear || cls");

	printf("=== Notas === \n");
	
	for (i = 0; i <3; i++){
		printf("%dª nota: %.1f\n", i + 1,notas[i]);
	}
	
	media = (float)soma / i;
	
	printf("Média: %.1f",media);
	
	return 0;	
}
