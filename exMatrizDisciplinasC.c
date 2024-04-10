#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define DISCIPLINA 3 //Constante das disciplinas
#define NOTAS 2 // Constante das notas

int main(){
	setlocale(LC_ALL,"");
	
	char disciplina [DISCIPLINA] [200]; //Vetor para 3 disciplinas.
	float notas [DISCIPLINA] [NOTAS]; //Matriz com 2 notas para três disciplinas.
	float soma=0,media[DISCIPLINA];
	int i,j;
	
	for(i=0;i<DISCIPLINA;i++){ //Laço para cada disciplina.
		printf("Digite o nome da %dª disciplina: ",i+1);
		scanf("%s",&disciplina[i]);
		
		fflush(stdin);
		
		for(j=0;j<NOTAS;j++){ //Laço para a nota da disciplina atual.
			printf("Digite a %dª nota:",j+1);
			scanf("%f",&notas[i][j]);
			
			soma += notas[i][j];
		}
		
		media[i] = soma /j;
		soma = 0; //Zera a variável soma a cada laço.
				
		printf("\n"); 
	}

	system("cls || clear");
	printf("\n===Exibindo resultados===\n");
	
	for(i=0;i<DISCIPLINA;i++){ //Laço para a exibição de cada disciplina.
		printf("Nome da disciplina: %s \n",disciplina[i]);
		
		fflush(stdin);
		
		for(j=0;j<NOTAS;j++){ //Laço para a exibição da nota de cada disciplina.
			printf("%dª nota: %.1f \n",j+1,notas[i][j]);
		}
		printf("Média: %.1f \n",media[i]);
		printf("\n");	
	}
		
	return 0;
}
