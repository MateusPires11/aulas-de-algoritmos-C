#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 65001 > nul");

    int par[10], impar[10];
    int i, valor, im, p;
    im = 0;
    p = 0;

    printf("Digite os numeros para o vetor \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%i", &valor);

        if (valor % 2 == 0)
        {
            par[p] = valor;
            p++;
        }
        else
        {
            impar[im] = valor;
            im++;
        }
    }
    printf("Pares: ");
    for (i = 0; i < p; i++)
    {
        printf("%i ", par[i]);
    }
    printf("\n");
    printf("Impares: ");
    for (i = 0; i < im; i++)
    {
        printf("%i ", impar[i]);
    }
    printf("\n\n");
    system("pause");
}