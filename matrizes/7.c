#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main()
{

    int matriz[4][3];

    int i, j, num;

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
    printf("matriz normal: ");
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");

        for (j = 0; j < 3; j++)
        {
            printf("%i", matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] == num)
            {
                matriz[i][j] = 0;
            }
            else if (matriz[i][j] < num)
            {
                matriz[i][j] = -1;
            }
            else if (matriz[i][j] > num)
            {
                matriz[i][j] = 1;
            }
        }
    }
    printf("\n");
    printf("matriz alterada: \n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");

        for (j = 0; j < 3; j++)
        {
            printf("%3i", matriz[i][j]);
        }
    }

    getche();
}