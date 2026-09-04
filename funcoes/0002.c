#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void lernotas(float *n1, float *n2);
float media(float a,float b);

int main()
{
   float n1, n2, res;

    lernotas(&n1, &n2);
    
    res =  media(n1, n2);

    printf("a media eh: %.2f", res);
}

void lernotas(float *n1, float *n2)
{
    printf("Digite a primeira nota: ");
    scanf("%f", n1);

    printf("Digite a segunda nota: ");
    scanf("%f", n2);
}

float media(float a,float b){
    float res;
    res = (a + b) / 2;

    return(res);

}

