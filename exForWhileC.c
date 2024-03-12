#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho() {
    system("cls || clear");
    printf("\n===SENAI===\n");
    fflush(stdin);
}

int main() {
    setlocale(LC_ALL,""); 
    cabecalho();
    
    float nota, media, soma = 0;
    int i;
    
    for (i = 1; i <= 2; i++) {
        do {
            printf("Digite a %iª nota: ", i);
            scanf("%f", &nota);
            cabecalho();
        } while (nota < 0 || nota > 10);
        soma = soma + nota;
    }
    
    media = soma / 2;
    
    printf("Média: %.1f \n", media);
    printf("FIM.");
    
    return 0;
}
