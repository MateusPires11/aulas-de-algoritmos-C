#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>

int main()
{
    int v, i;
    int reset = 1,maiors = 1;

    printf("Determine um tamanho para o vetor. ");
    scanf("%i", &v);
    int vet[v];

    for (i = 0; i < v; i++)
    {
        scanf("%i", &vet[i]);
    }

    for (i = 0; i < v; i++)
    {
        if (vet[i] == vet[i - 1] + 1)
        {
            reset++;
            if (reset > maiors)
                maiors = reset;
        }
        else
        {
            reset = 1;
        }
    }

    for (i = 0; i < v; i++)
    {
        printf("%i ", vet[i]);
    }
    printf("\n");
    printf("%i", maiors);
}
