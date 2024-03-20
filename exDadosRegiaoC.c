#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"");
	
	char sexo;
	int idade,maiorIdade=0,menorIdade=999,opcao,quantidadeSalarios = 0,mulheres5k = 0;
	float salario,somaSalarios = 0,mediaSalarial;
	
	do{
	
	
	printf("\nCódigo | Descrição\n");
	printf("1 | Adicionar pessoa.\n");
	printf("2 | Exibir resultados e sair.\n");
	printf("--Digite o código correspondente-- \n");
	scanf("%i",&opcao);
	
	system("clear || cls");
	
	switch (opcao){
		case 1:
			
	
			printf("\nDigite sua idade: ");
			scanf("%i",&idade);
	
	
			printf("\nDigite seu salário: ");
			scanf("%f",&salario);
	
			printf("\nDigite seu sexo (f/m) : ");
			scanf("%s",&sexo);
			
			sexo = toupper(sexo);
			
			if(idade > maiorIdade){
				maiorIdade = idade;
			}
			
			if(idade < menorIdade){
				menorIdade = idade;
			}
			
			quantidadeSalarios++;
			somaSalarios+=salario;
			
			if(sexo =='F' && salario >= 5000){
				mulheres5k++;
			}
			
			break;
			
		case 2:
			mediaSalarial = somaSalarios/quantidadeSalarios;
			
			printf("\n===Exibindo resultados ===\n");
			printf("Média salarial do grupo: R$ %.2f \n",mediaSalarial);
			printf("Maior idade: %i \n",maiorIdade);
			printf("Menor idade: %i \n",menorIdade);
			printf("Quantidade de mulheres com salário acima de 5 mil: %i \n",mulheres5k);
			
			break;
		default:
			printf("Opção inválida. \n");		
	}
	
	
	}while(opcao != 2);		
	
	
	return 0;
	
}
