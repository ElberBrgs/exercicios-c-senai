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
	
    // Declarando variáveis.
    int nota, soma = 0, i;
	
    // Solicitando dados para o usuário.
    for(i = 1; i <= 5; i++) {
        printf("Digite a %iª nota: ", i);
        scanf("%i", &nota);

        // Somando notas
        soma = soma + nota;
    }
	
    // Exibindo resultado.
    printf("\nSoma: %i \n", soma);
	
    return 0;
}
