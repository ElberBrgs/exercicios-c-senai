#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float media, mediaPar;
    int numero, soma = 0, contador = 0, par = 0, impar = 0, somaPar = 0;

    printf("Digite um número: ");
    scanf("%i", &numero);

    while (numero != 0) {
        if (numero > 0) {
            contador++;
            soma += numero;

            // Calculando quantidade de números par e ímpar
            if (numero % 2 == 0 && numero > 0) {
                par++;
                somaPar += numero;
            } else {
                impar++;
            }
        }

        printf("Digite um número: ");
        scanf("%i", &numero);
    }
    
    if (contador == 0) {
        printf("Digite um número positivo.");
    } else {
        media = soma / (float)contador;
        mediaPar = (par != 0) ? somaPar / (float)par : 0;

        // Mostrando quantidade de números par e ímpar
        printf("\nNúmeros PAR: %i \n", par);
        printf("\nNúmeros ÍMPAR: %i \n", impar);
        printf("\nMédia dos pares: %.2f", mediaPar);
        printf("\nMédia geral: %.2f", media);
    }

    return 0;
}
