#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


float calcular(float *n1, float *n2);
float lernumeros(float *n1, float *n2);

int main()
{
    float n1, n2, res;

    lernumeros(&n1, &n2);

   res =  calcular(&n1, &n2);

   printf("o resultado eh: %2.f", res);
}

float lernumeros(float *n1, float *n2)
{
    printf("Digite o primeiro valor: ");
    scanf("%f", n1);
    printf("Digite outro numero: ");
    scanf("%f", n2);

    return(0);
}

float calcular(float *n1, float *n2)
{
    char op;
    float res;
    printf("escolha um operador : + \n escolha um operador : - \n escolha um operador : * \n escolha um operador : / \n ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        res = (*n1) + (*n2);break;
    case '-':
        res = (*n1) - (*n2); break;
    case '*':
        res = (*n1) * (*n2); break;
    case '/':
        res = (*n1) / (*n2); break;
    default:
        printf("operador nao reconhecido ");
        break;
    }


    return(res);
}
