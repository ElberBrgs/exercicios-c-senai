#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	char sexo,nome[200];
	int idade,maiorIdade,menorIdade,codigo=0;
	float salario,soma,mediaSalario;
	
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	
	printf("\nDigite sua idade: ");
	scanf("%i",&idade);
	
	
	printf("\nDigite seu salário: ");
	scanf("%f",&salario);
	
	printf("\nDigite seu sexo (f/m) : ");
	scanf("%s",&sexo);
	
	fflush(stdin);
	system("clear || cls");
	
	//Exibindo tabela
	printf("\n--Digite o código correspondente-- \n");
	printf("Código | Descrição\n");
	printf("1 | Adicionar pessoa.\n");
	printf("2 | Exibir resultados e sair.\n");
	scanf("%i",&codigo);
	
	
	while(codigo==1){
		//TRANSFORMAR EM FUNÇÃO DEPOIS
		printf("Digite seu nome: ");
		scanf("%s",&nome);
	
		printf("\nDigite sua idade: ");
		scanf("%i",&idade);
	
	
		printf("\nDigite seu salário: ");
		scanf("%f",&salario);
	
		printf("\nDigite seu sexo (f/m) : ");
		scanf("%s",&sexo);
		
		printf("\nDigite o código novamente: ");
		scanf("%i",&codigo);
	
		fflush(stdin);
		system("clear || cls");
	}
	
	return 0;
	
}
