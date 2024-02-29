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
	
	//Declarando variáveis
	char nome[200],conceito;
	float media,primeiraNota,segundaNota;
	
	//Pedindo dados
	printf("Digite seu nome: ");
	fgets(nome,200,stdin);	//FORMA DE PEGAR CARACTERES APÓS O ESPAÇO.
	printf("Digite a primeira nota: ");
	scanf("%f",&primeiraNota);
	printf("Digite a segunda nota: ");
	scanf("%f",&segundaNota);
	cabecalho();
	
	//Calculando média
	media = (primeiraNota + segundaNota) /2;
	
	//Testando conceito
	if(media>=9){
		conceito = 'A';
	}else if(media>=7.5){
		conceito = 'B';
	}else if(media>=6){
		conceito = 'C';
	}else if(media>=4){
		conceito = 'D';
	}else{
		conceito = 'E';
	}
	
	if(conceito == 'A' || conceito== 'B' || conceito == 'C'){
		printf("Aprovado!");
	}else{
		printf("Reprovado!");
	}
	
	//Exibindo dados
	printf("Nome: %s",nome);
	printf("Primeira nota: %.1f \n", primeiraNota);
	printf("Segunda nota: %.1f \n",segundaNota);
	printf("Média: %.1f \n",media);
	printf("Conceito: %c",conceito);
	
	
	return 0;
}
