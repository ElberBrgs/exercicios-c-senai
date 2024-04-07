#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho() {
    system("cls || clear");
    printf("\n===SENAI===\n");
    fflush(stdin);
}

int main() {
    setlocale(LC_ALL, ""); 
    cabecalho();
	
    int numero, i, pares = 0, impares = 0;
	
    for(i = 1; i <= 5; i++) {
        printf("Escreva o %iº valor: ", i);
        scanf("%i", &numero);
		
        if(numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    printf("Pares: %i \n", pares);
    printf("Ímpares: %i \n", impares);
	
    return 0;
}
