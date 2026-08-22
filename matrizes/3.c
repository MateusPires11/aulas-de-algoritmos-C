#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{

    int matriz[4][4];

    int i, j, l;
    l = 3;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
           if (j == l)
            {
                matriz[i][j] = 1;
                l--;
            }else
            {
                matriz[i][j] = 0;
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        printf("\n");

        for (j = 0; j < 4; j++)
        {
            Sleep(500);
            printf("%i", matriz[i][j]);
        }
    }

    getche();
}