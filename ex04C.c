#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando variáveis
    int numero,antecessor,sucessor;
    
    //Pedindo valores
    printf("Digite um número: ");
    scanf("%i",&numero);
    
    //Testando valores e exibindo resultados
    if(numero!=0){
        antecessor = numero - 1;
        sucessor = numero + 1;
        printf("Antecessor: %i \n",antecessor);
        printf("Sucessor: %i \n",sucessor);
        
    }else{
        printf("Número sem antecessor. \n");
        sucessor = numero + 1;
        printf("Sucessor: %i \n",sucessor);
    };
    
    

    return 0;
}
