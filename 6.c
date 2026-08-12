#include<stdio.h>
#include<stdlib.h>


int main()
{
    system("chcp 65001 > nul");

    int vet[20],pares[20],impares[20];
    int i,valor,pr,im;

    pr = 0;
    im = 0;

    printf("Digite os numeros para o vetor \n");
    for (i = 0; i < 20; i++)
    {
        scanf("%i", &valor);
        vet[i] = valor;
    }

    for ( i = 0; i < 20; i++)
    {
        if (vet[i] % 2 == 0)
        {
            pares[pr] = vet[i];
            
            pr++;
        }else{
            impares[im] = vet[i];
            im++;

        }


    }
    
    printf("Pares: ");
    for (i = 0; i < pr; i++)
    {
        printf("%i ", pares[i]);
    }
    printf("\n");
    printf("Impares: ");
    for (i = 0; i < im; i++)
    {
        printf("%i ", impares[i]);
    }
    printf("\n\n");
    system("pause");
}
    
