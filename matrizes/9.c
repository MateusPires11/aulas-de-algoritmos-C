#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int main()
{

    int vet[10];
    int cont, i, num;

    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        vet[i] = rand() % 10;
    }

    printf("digite um numero de 1 a 10: ");
    scanf("%i", &num);
    cont = 0;
    for (i = 0; i < 10; i++)
    {
        if (vet[i] == num)
        {
            printf("numero encontrado na posicao %i \n", i);
            cont++;
        }
    }
    printf("Vetor: ");
    for (i = 0; i < 10; i++)
    {

        printf("%i ", vet[i]);
    }
    printf("\n");
    if (cont == 0)
    {
        printf("numero nao foi encontrado no vetor");
    }

    getch();
}