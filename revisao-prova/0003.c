#include<stdio.h>
#include <stdlib.h>
#include <conio.h>

void preenchervet(int vet[],int v);
void inveteritens(int vet[],int v);

int main(){
    int v,i;

    printf("Determine um tamanho para o vetor. ");
    scanf("%i",&v);

    int vet[v];

    preenchervet(vet, v);


    for ( i = 0; i < v; i++)
    {
        printf("%i ", vet[i]);
    }
    

    inveteritens(vet, v);
    
     printf("\n");

    for ( i = 0; i < v; i++)
    {
        printf("%i ", vet[i]);
    }
   
}

void preenchervet(int vet[],int v){
    
    int i;

    for (i = 0; i < v; i++)
    {
        scanf("%i",&vet[i]);
    }

}

void inveteritens(int vet[],int v){
    

    int f = v - 1;
    int aux = 0;
    
    
    for (int i = 0; i < v / 2 ; i++)
    {
        aux = vet[i];
        vet[i] = vet[f];
        vet[f] = aux; 
        
        f--;
    }
    
}