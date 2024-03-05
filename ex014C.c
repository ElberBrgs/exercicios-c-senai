#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	system("cls || clear");
	printf("\n===SENAI===\n");
	fflush(stdin);
}

int main(){
	setlocale(LC_ALL,""); 
	
	//Declarando variáveis.
	int nota, soma, contador;
	
	//Solicitando dados para o usuário.
	for(contador =1; contador <=5; contador++){
		printf("Digite a %iª nota: ", contador);
		scanf("%i",&nota);

    //Somando notas
		soma = soma + nota;
	}
	
	
	//Exibindo resultado.
	printf("\nSoma: %i \n",soma);
	
	
	return 0;
}
