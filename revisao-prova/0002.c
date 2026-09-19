#include<stdio.h>
#include <stdlib.h>
#include <conio.h>

void preenchervet(int vet[],int v);

int main(){
    int v,i;

    printf("Determine um tamanho para o vetor. ");
    scanf("%i",&v);

    int vet[v];

    preenchervet(vet, v);


    for ( i = 0; i < v; i++)
    {
        printf("%i", vet[i]);
    }
    
   
}

void preenchervet(int vet[],int v){

    int i;

    for (i = 0; i < v; i++)
    {
        scanf("%i",&vet[i]);
    }

}