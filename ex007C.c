#include <stdio.h>
#include <stdlib.h>

void cabecalho() {
    system("cls || clear");
    printf("\n===SENAI===\n");
    fflush(stdin);
}

int main() {
    // Declarando variáveis
    char nome[200];
    int idade;
    float primeiraNota, segundaNota, terceiraNota;
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
    cabecalho();
    
    // Calculando média
    media = (primeiraNota + segundaNota + terceiraNota) / 3; 
    
    // Exibindo dados
    printf("Nome: %s \n", nome);
    printf("Idade: %i \n", idade);
    printf("Sua média é: %.2f \n", media);
    
    // Testando média
    if(media >= 7) {
        printf("Aprovado! \n");
    } else {
        printf("Reprovado! \n"); 
    }    

    return 0;
}
