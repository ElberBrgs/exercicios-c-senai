#include <stdio.h>
#include <stdlib.h>

int main (){
	char nome [200];
	char sexo;
	int idade;
	float peso;
	
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	//Limpa o cache
	fflush(stdin);
	
	printf("Digite seu sexo - (F) ou (M): ");
	scanf("%c",&sexo);
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	
	//Limpa o terminal
	system("cls");
	
	//& não é necessário no printf
	printf("Nome: %s \n",nome);
	printf("Sexo: %c \n",sexo);
	printf("Idade: %i \n",idade);
	printf("Peso: %.2f \n",peso);
	
	
	return 0;
}
