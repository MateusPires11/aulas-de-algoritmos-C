#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    int matriz[6][6];

    int i, j, distCima, distBaixo, distEsq, distDir, menor;

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            distCima = i;
            distBaixo = 5 - i;
            distEsq = j;
            distDir = 5 - j;

            menor = distCima;

            if (distBaixo < menor)
            {
                menor = distBaixo;
            }
            if (distEsq < menor)
            {
                menor = distEsq;
            }
            if (distDir < menor)
            {
                menor = distDir;
            }

            matriz[i][j] = menor + 1;
        }
    }
    for (i = 0; i < 6; i++)
    {
        printf("\n");

        for (j = 0; j < 6; j++)

            printf("%i", matriz[i][j]);
    }

    getche();
}