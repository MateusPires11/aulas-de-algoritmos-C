#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main()
{
    int i, j, v, v1, soma, t;
    
    printf("Digite um tamanho para a matriz ");
    scanf("%i", &t);
    int matriz[t][t];
    int result[t];
    int vetor[t];

    srand(time(NULL));

    for (i = 0; i < t; i++)
    {
        for (j = 0; j < t; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }
    for (i = 0; i < t; i++)
    {
        vetor[i] = rand() % 10;
    }

    v = 0;
    v1 = 0;
    for (i = 0; i < t; i++)
    {
        soma = 0;

        for (j = 0; j < t; j++)
        {

            soma = soma + matriz[i][j];
        }
        result[v] = soma + vetor[v];
        v++;
        v1++;
    }

    printf("\nMatriz:\n");
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < t; j++)
        {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nVetor: ");
    for (i = 0; i < t; i++)
    {
        printf("%2d ", vetor[i]);
    }

    printf("\n");
    printf("\nSoma: ");
    for (i = 0; i < t; i++)
    {

        Sleep(500);
        printf("%2d ", result[i]);
    }

    getche();
}