#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,p;
    int primo = 0;

    int vet[9];

    printf("digite os numeros para o vetor ");

    for ( i = 0; i < 9; i++)
    {
        scanf("%i",&vet[i]);
    }
    
    for ( i = 0; i < 9; i++)
    {
        primo = 1;
        if (vet[i] < 2)
        {
            primo = 0;
        }
        
        for ( p = 2; p < vet[i]; p++)
        {
           if ( vet[i] % p == 0 )
           {
             primo = 0;
           }
           
        }

        if (primo == 1)
        {
            printf("o numero %i e primo na posicao %i\n", vet[i], i);
        }

    } 
    

    system("pause");

}