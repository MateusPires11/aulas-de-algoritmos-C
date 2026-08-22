#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main()
{

    int a[4][4];
    int b[4][4];
    int r[4][4];

    int i, j;

    srand(time(NULL));

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            a[i][j] = rand() % 100;
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            b[i][j] = rand() % 100;
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            r[i][j] = a[i][j] + b[i][j];
        }
    }

    for (i = 0; i < 4; i++)
    {
        
        for (j = 0; j < 4; j++)
            printf("%4d", a[i][j]);

        if (i == 1)
            printf("  +  ");
        else
            printf("     ");

        
        for (j = 0; j < 4; j++)
            printf("%4d", b[i][j]);

        
        if (i == 1)
            printf("  =  ");
        else
            printf("     ");

        
        for (j = 0; j < 4; j++)
            printf("%4d", r[i][j]);

        printf("\n");
    }

    getche();
}