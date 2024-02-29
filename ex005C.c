#include <stdio.h>

int main(){
	
	//Declarando variáveis
	float salario,salarioMinimo,quantidadeSalariosMin;
	
	//Pedindo dados
	printf("Digite seu salário mensal: R$ ");
	scanf("%f",&salario);
	
	//Calculando e exibindo dados
	salarioMinimo = 1412;
	quantidadeSalariosMin = salario / salarioMinimo;
	printf("Salários mínimos ganhos: %.0f \n",quantidadeSalariosMin);
	
	return 0;
}
