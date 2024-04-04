#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"");
	
	int numeros [2] [2];
	
	numeros [0] [0] = 1;
	numeros [0] [1] = 2;
	numeros [1] [0] = 3;
	numeros [1] [1] = 4;
	
	printf("%dª posição.\n",numeros[0][0]);
	printf("%dª posição.\n",numeros[0][1]);
	printf("%dª posição.\n",numeros[1][0]);
	printf("%dª posição.\n",numeros[1][1]);
	
	return 0;
}
	
