#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int *v;
    int tamanho,i;
    
    printf("\nDetermine um valor para memória para um vetor: ");
    scanf("%i",&tamanho);
    
    v = calloc(tamanho,sizeof(int));

    if (v == NULL)
    {
        printf("\nERRO NA ALOCACAO DA MEMORIA");
    }else
    {
        printf("Digite os numeros: \n");
        for ( i = 0; i < tamanho; i++)
        {
            scanf("%i",&v[i]);
        }
        printf("os numeros digitados sao: ");
        for ( i = 0; i < tamanho; i++)
        {
            printf("%i ", v[i]);
        }
        free (v);        
    }

    getche();
}