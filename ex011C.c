#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> //Biblioteca para comparar strings

void cabecalho(){
	system("cls || clear");
	printf("\n===SENAI===\n");
	fflush(stdin);
}

int main(){
	setlocale(LC_ALL,"");
	
	//Declarando variáveis
	char login[200],senha[200];
	char loginCadastrado[200] = "Elber",senhaCadastrada[200] = "123";
	
	//Pedindo dados
	printf("Login: ");
	scanf("%s",login);
	printf("Senha: ");
	scanf("%s",senha);
	cabecalho();
	
	//Testando e exibindo dados
	if(strcmp(login, loginCadastrado)==0 && strcmp(senha,senhaCadastrada)== 0){
		printf("Bem-vindo!");
	}else{
		printf("Login ou senha inválidos.");
	}
	
	return 0;
}
