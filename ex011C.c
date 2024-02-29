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
	
	//
	char login[200];
	char senha[200];
	
	//
	printf("Login: ");
	scanf("%s",login);
	printf("Senha: ");
	scanf("%s",senha);
	cabecalho();
	
	//
	if(login =="elbo" && senha =="123"){
		printf("Bem-vindo!");
	}else{
		printf("Login ou senha inválidos.");
	}
	
	return 0;
}
