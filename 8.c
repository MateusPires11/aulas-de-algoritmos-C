#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, soma;
    float media;
    int vet[5];

    printf("Digite os numeros para o vetor: ");

    for ( i = 0; i < 5; i++)
    {
        scanf("%i",&vet[i]);
    }

    soma = 0;

    for ( i = 0; i < 5; i++)
    {
       soma = soma + vet[i];
    }
      media = soma / 5;
    printf(" A media %f", media);

    printf("\n\n ");
      
    printf("os numeros maiores q a media ");


    for ( i = 0; i < 5; i++)
    {
        if(vet[i] > media)
            printf("%i ",vet[i]);
    }
    printf("\n\n ");

    printf("os numeros menores que a media ");
    for ( i = 0; i < 5; i++)
    {
        if(vet[i] < media)
            printf("%i ",vet[i]);
    }
    
    printf("\n\n ");

    system("pause");
}