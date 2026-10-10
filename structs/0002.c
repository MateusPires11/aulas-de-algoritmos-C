#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct notas
{

    float nota1[10];
    float nota2[10];
    float media[10];

} notas;

int main(){
    int i;
    float somamedia,mediaturma;

    for (i = 0; i < 10; i++)
    {
        printf("\nDigite a primeira nota do aluno: ");
        scanf("%f", &notas.nota1[i]);

        printf("\nDigite a segunda nota do aluno: ");
        scanf("%f", &notas.nota2[i]);

        notas.media[i] = (notas.nota1[i] + notas.nota2[i]) / 2;
    }

    printf("Nota 1: ");
    for (i = 0; i < 10; i++)
    {
        printf(" %2.f", notas.nota1[i]);
    }
    printf("\nnota 2: ");
    for ( i = 0; i < 10; i++)
    {
        printf(" %2.f", notas.nota2[i]);    
    }
    printf("\nMedia de cada aluno");
    for ( i = 0; i < 10; i++)
    {
        printf(" %2.f", notas.media[i]);    
    }
    
    for ( i = 0; i < 10; i++)
    {
        somamedia = somamedia + notas.media[i];
        
    }
    mediaturma = somamedia / 10;

    printf("\na media da turma eh = %2.f",mediaturma);

    
    

    getch();
}
