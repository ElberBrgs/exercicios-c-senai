#include <stdio.h>

int main(){
	
	//Declarando vari�veis
	float salario,salarioMinimo,quantidadeSalariosMin;
	
	//Pedindo dados
	printf("Digite seu sal�rio mensal: R$ ");
	scanf("%f",&salario);
	
	//Calculando e exibindo dados
	salarioMinimo = 1412;
	quantidadeSalariosMin = salario / salarioMinimo;
	printf("Sal�rios m�nimos ganhos: %.0f \n",quantidadeSalariosMin);
	
}
