#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main()
{

    int matriz[4][4];
    int result[4];
    int vetor[4];

    int i, j, v, v1, soma;

    srand(time(NULL));

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }
    for (i = 0; i < 4; i++)
    {
        vetor[i] = rand() % 10;
    }

    v = 0;
    v1 = 0;
    for (i = 0; i < 4; i++)
    {
        soma = 0;

        for (j = 0; j < 4; j++)
        {

            soma = soma + matriz[i][j];
        }
        result[v] = soma + vetor[v];
        v++;
        v1++;
    }

    printf("\nMatriz:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nVetor: ");
    for (i = 0; i < 4; i++)
    {
        printf("%2d ", vetor[i]);
    }

    printf("\n");
    printf("\nSoma: ");
    for (i = 0; i < 4; i++)
    {

        Sleep(500);
        printf( "%2d ", result[i]);
    }

    getche();
}