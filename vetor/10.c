#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main()
{

    int vet[10];
    int i, aux, f;

    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        vet[i] = rand() % 10;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%i ", vet[i]);
    }

    f = 9;
    for (i = 0; i < 5; i++)
    {

        aux = vet[i];

        vet[i] = vet[f];

        vet[f] = aux;

        f--;

        aux = 0;
    }

    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("%i ", vet[i]);
    }
}