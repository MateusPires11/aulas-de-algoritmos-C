#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>

int main()
{

    float mat[3][3];
    int i,j;

    srand(time(NULL));

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mat[i][j] = rand() % 10;
        }
    }

    printf("endereco dos valores da matrix: \n");

    for (i = 0; i < 3; i++)
    {
       for (j = 0; j < 3; j++)
        {
            printf("%p ", &mat[i][j]);
        } 
    }
    getch();
}