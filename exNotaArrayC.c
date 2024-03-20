#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int notas[3],i;
	
	printf("=== Digite suas notas === \n");
	for (i = 0; i<3; i++){
		printf("%dª nota: ",i + 1);
		scanf("%d",&notas[i]);
		
		
	}
	system("clear || cls");
	
	for (i = 0; i <3; i++){
		printf("=== Notas === \n");
		printf("%dª nota: %d\n", i + 1,notas[i]);
	}
	
	return 0;
	
}
