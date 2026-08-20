#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("chcp 65001 > nul"); 

    int n1,i,n2;

    printf("Digite o tamanho do vetor: ");
    scanf("%i",&n1);

    int vet[n1];

    printf("Digite os valores para o vetor: \n");
    
    for ( i = 0; i < n1; i++)
    {
        scanf("%i",&n2);
        vet[i] = n2;

        if(n2 == -1)
        {
            n1 = i;
        }
    }
    printf("os valores são \n");
    for ( i = 0; i < n1; i++)
    {
       printf("%i ", vet[i]);
    }
    
    system("pause");
}