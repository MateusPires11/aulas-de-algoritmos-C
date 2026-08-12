#include <stdio.h>
#include <stdlib.h>


int main()
{

    int maior=0 ,menor=0;
    int i,t;
    

    printf("Digite o tamanho para o vetor: ");
    scanf("%i",&t);

    int vet[t];

    printf("Digite os numeros para o vetor: ");
    //colocar os numeros no vetor
    for ( i = 0; i < t; i++)
    {
        scanf("%i",&vet[i]);

    }

    //ler o vetor
    maior = vet[0];
    menor = vet[0];

    for ( i = 0; i < t; i++)
    {
        if (vet[i] > maior)
        {    
            maior = vet[i];
        
        }else if (vet[i < menor ])
        {
            menor = vet[i];
        }
     
    
    }

    printf("Menor: %i \n",menor);
    printf("Maior: %i \n",maior);
   
    system("pause");
}