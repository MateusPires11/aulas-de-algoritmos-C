#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void mostrarnotas(float vet[]);
float media(float vet[]);
void maiornota(float vet[], float *maior, float *menor);




int main(){
    float vet[5];
    int i;
    float maior,menor,mediaa;
    printf("digite as notas: ");

    for ( i = 0; i < 5; i++)
    {
        scanf("%f",&vet[i]);
    }
    
    mostrarnotas(vet);
    mediaa = media(vet);

    maiornota(vet, &maior, &menor);

    printf("\na media e %2.f\n",mediaa);
    printf("a maior nota e %2.f\n",maior);
    printf("a menor nota e %2.f\n",menor);

    getch();
}


void mostrarnotas(float vet[]){
    int i;

    printf("As notas sao: ");

    for ( i = 0; i < 5; i++)
    {
        printf("%2.f ", vet[i]);
    }
}

float media(float vet[]){

    float soma, mediaa;
    int i;
    soma = 0;
    

    for ( i = 0; i < 5; i++)
    {

        soma = soma + vet[i];

    }

    mediaa = soma / 5;
    
    return(mediaa);
}

void maiornota(float vet[], float *maior, float *menor){

    int i;

    *maior = vet[0];

    for ( i = 0; i < 5; i++)
    {
        if (vet[i] > *maior)
        {
            *maior = vet[i];
        }
    }
    
    *menor = vet[0];

    for ( i = 0; i < 5; i++)
    {
        if ( vet[i] < *menor )
        {
            *menor = vet[i];
        }
    }
}