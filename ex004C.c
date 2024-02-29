#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando variáveis
    int numero,antecessor,sucessor;
    
    //Pedindo valores
    printf("Digite um número inteiro: ");
    scanf("%i",&numero);
    
    //Testando valores
    sucessor = numero + 1;
    antecessor = numero -1;
    
    //Exibindo resultados
    printf("Sucessor: %i \n",sucessor);
    printf("Antecessor: %i \n",antecessor);

    return 0;
}
