#include <stdio.h>
#include <stdlib.h>


int main()
{

    int vet[10];
    int maior = 0 ,menor = 0,media1, media;
    int i;
    media1 = 0;

    printf("Digite os numeros para o vetor: ");


    //colocar os numeros no vetor
    for ( i = 0; i < 10; i++)
    {
        scanf("%i",&vet[i]);

    }

    //ler o vetor
    maior = vet[0];
    menor = vet[0];

    for ( i = 0; i < 10; i++)
    {
        if (vet[i] > maior)
        {    
            maior = vet[i];
        
        }else if (vet[i < menor ])
        {
            menor = vet[i];
        }
        media1 = media1  + vet[i];
    
    }


    media = media1 /10; 

    printf("Media: %i \n",media);
    printf("Menor: %i \n",menor);
    printf("Maior: %i \n",maior);
   
    system("pause");
}