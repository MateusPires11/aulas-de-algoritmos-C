#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void invrtvet(int vet[]);
void imprimir(int vet[]);

int main()
{

    int vet[5];
    int i;

    printf("digite os valores para o vetor: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%i", &vet[i]);
    }

    printf("primeiro vetor: \n");
    imprimir(vet);

    invrtvet(vet);

    getch();
    return 0;
}

void invrtvet(int vet[])
{
    int invet[5];
    int i, j, k;
    j = 4;
    k = 0;

    printf("\nvetor ao contrario: \n");
    for (i = 0; i < 5; i++)
    {
        invet[k] = vet[j];
        k++;
        j--;
    }


    imprimir(invet);
    
 

    
}

void imprimir(int vet[])
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf(" %i", vet[i]);
    }
}