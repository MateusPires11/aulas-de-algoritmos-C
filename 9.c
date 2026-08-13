#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first[5];
    int second[5];
    int difer[5];
    int mult[5];
    int soma[5];
    int i, d, f, s, m, sm;
    printf("Digite os numeros para o primeiro vetor \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%i", &first[i]);
    }
    printf("\n\n");
    printf("Digite os numeros para o segundo vetor \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%i", &second[i]);
    }

    d = 0;
    f = 0;
    s = 0;
    for (i = 0; i < 5; i++)
    {
        difer[d] = first[f] - second[s];
        d++;
        s++;
        f++;
        
      
    }
    f = 0;
    s = 0;
    m = 0;
    for (i = 0; i < 5; i++)
    {
        mult[m] = first[f] * second[s];
        s++;
        f++;
        m++;
    }
    f = 0;
    s = 0;
    sm=0;
    for (i = 0; i < 5; i++)
    {
        soma[sm] = first[f] + second[s];
        s++;
        f++;
        sm++;
    }
    printf("primeiro vetor: ");
    for (i = 0; i < 5; i++)
    {
        printf("%i ", first[i]);
    }
    printf("\n\n");
    printf("segundo vetor: ");
    for (i = 0; i < 5; i++)
    {
        printf("%i ", second[i]);
    }

    printf("\n\n");
    printf("diferenca dos vetores: ");
    for (i = 0; i < 5; i++)
    {
        printf("%i ", difer[i]);
    }

    printf("\n\n");
    printf("Soma dos vetores: ");
    for (i = 0; i < 5; i++)
    {
        printf("%i ", soma[i]);
    }
    printf("\n\n");
    printf("multiplicacao dos vetores: ");
    for (i = 0; i < 5; i++)
    {
        printf("%i ", mult[i]);
    }

    system("pause");
}