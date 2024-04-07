#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ALUNOS 4 //Constante dos alunos
#define NOTAS 3 // Constante das notas

int main(){
	setlocale(LC_ALL,"");
	
	char alunos [ALUNOS] [200]; //Vetor para quatro nomes.
	float notas [ALUNOS] [NOTAS]; //Matriz com 3 notas para quatro alunos.
	float soma=0,media[4];
	int i,j;
	
	for(i=0;i<ALUNOS;i++){
		printf("Digite o nome do %dº aluno: ",i+1);
		scanf("%s",&alunos[i]);
		
		for(j=0;j<NOTAS;j++){
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
	
	for(i=0;i<ALUNOS;i++){
		printf("%dº aluno: %s \n",i+1,alunos[i]);
		
		for(j=0;j<NOTAS;j++){
			printf("%dª nota: %.1f \n",j+1,notas[i][j]);
		}
		printf("Média do %dº aluno: %.1f \n",i+1,media[i]);
		printf("\n");
		
	}
	
	return 0;
}
