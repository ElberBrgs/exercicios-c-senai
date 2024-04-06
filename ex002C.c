#include <stdio.h>
#include <stdlib.h>

void cabecalho() {
    system("cls || clear");
    printf("\n===SENAI===\n");
}

int main() {
    // Declarando variáveis
    char nome[200];
    int idade;
    float primeiraNota, segundaNota, terceiraNota, quartaNota;
    float media;
    
    // Pedindo dados
    cabecalho();
    printf("Digite seu nome: ");
    scanf("%s", nome);
    cabecalho();
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    
    cabecalho();
    printf("Primeira Nota: ");
    scanf("%f", &primeiraNota);
    printf("Segunda Nota: ");
    scanf("%f", &segundaNota);
    printf("Terceira Nota: ");
    scanf("%f", &terceiraNota);
    printf("Quarta Nota: ");
    scanf("%f", &quartaNota);
    cabecalho();
    
    // Calculando média
    media = (primeiraNota + segundaNota + terceiraNota + quartaNota) / 4; 
    
    // Exibindo dados
    printf("Nome: %s \n", nome);
    printf("Idade: %i \n", idade);
    printf("Nota 1: %.2f \n", primeiraNota);
    printf("Nota 2: %.2f \n", segundaNota);
    printf("Nota 3: %.2f \n", terceiraNota);
    printf("Nota 4: %.2f \n", quartaNota);
    printf("Sua média é: %.2f \n", media);

    return 0;
}
