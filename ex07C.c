#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	//Limpa o terminal
    system("cls || clear"); //por algum motivo s� funciona no Dev-C++ 5.11
	printf("\n===SENAI===\n");
	fflush(stdin);//Limpa cache - setbuf(stdin,0); no Online GDB
	}	

int main()
{
    //Declarando vari�veis
    char nome [200];
    int idade;
    float primeiraNota,segundaNota,terceiraNota;
    float media;
    
    //Pedindo dados
    cabecalho();
    printf("Digite seu nome: ");
    scanf("%s",nome);
    cabecalho();
	printf("Digite sua idade: ");
    scanf("%i",&idade);
    
    cabecalho();
    printf("Primeira Nota: ");
    scanf("%f",&primeiraNota);
    printf("Segunda Nota: ");
    scanf("%f",&segundaNota);
    printf("Terceira Nota: ");
    scanf("%f",&terceiraNota);
    cabecalho();
    
    //Calculando m�dia
    media = (primeiraNota+segundaNota+terceiraNota)/3; 
    
    //Exibindo dados
    printf("Nome: %s \n",nome);
    printf("Idade: %i \n",idade);
    printf("Sua m�dia �: %.2f \n",media);
    
	//Testando m�dia
    if(media>=7){
    	printf("Aprovado! \n");
	}else{
		printf("Reprovado! \n"); 
	}    

    return 0;
}

