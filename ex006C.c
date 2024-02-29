#include <stdio.h>

int main(){
	
	//Declarando variáveis
	float valor,resultado,desconto;
	
	//Pedindo valores
	printf("Digite um valor: ");
	scanf("%f",&valor);
	//Calculando desconto
	desconto = (valor * 0.1);
	resultado = valor - desconto;
	
	//Exibindo valores
	printf("Valor com desconto: %.2f \n",resultado);
	
	
	return 0;
}
