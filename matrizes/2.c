#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{

    int matriz[6][6];

    int i, j, l;
    l = 5;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (i == j)
            {
                matriz[i][j] = 1;
            }else if (j == l)
            {
                matriz[i][j] = 2;
                l--;
            }else
            {
                matriz[i][j] = 3;
            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        printf("\n");

        for (j = 0; j < 6; j++)
        {
            Sleep(500);
            printf("%i", matriz[i][j]);
        }
    }

    getche();
}