#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main()
{

    int matriz[3][3];

    int i, j, num, maior;

    srand(time(NULL));

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }

    printf("Digite um numero ");
    scanf("%i", &num);
    maior = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (num == matriz[i][j])
            {
                printf("posicao %i %i", i, j);
                printf("\n");
            }
            else if (matriz[i][j] > num)
            {

                maior++;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        printf("\n");

        for (j = 0; j < 3; j++)
        {
            printf("%i", matriz[i][j]);
        }
    }
    printf("\n");
    printf("%i sao maiores", maior);

    getche();
}