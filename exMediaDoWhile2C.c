#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h> //Biblioteca para converter para maiúscula.


int main(){
	setlocale(LC_ALL,"");

	//Variáveis	
	float nota,media,soma =0;
	int contador =0;
	char opcao;
	
	//Laço de repetição
	do{
		
		//Pedindo nota
		printf("Digite uma nota: ");
		scanf("%f",&nota);
		fflush(stdin);
		
		//Cálculo do contador
		contador++;
		
		//Adicionando ou não outra nota 
		printf("Tecle 'S' caso queira continuar e 'N' caso queira parar.\n ");
		scanf("%c",&opcao);
		fflush(stdin);
		
		//Cálculo de soma
		soma += nota;
		
		//Convertendo para maiúscula
		opcao = toupper(opcao);
		
	}while(opcao == 'S');
	
	//Cálculo de média
	media = soma / contador;
	
	//Testando e exibindo média
	if(opcao == 'N'&& contador >1){
		
		printf("Média: %.1f\n",media);
		printf("Bloco executado %i vezes.",contador);	
			
		}else{
			
		printf("Bloco executado %i vez.",contador);	
		
		}
		

	return 0;
}
