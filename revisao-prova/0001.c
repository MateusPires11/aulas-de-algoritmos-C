#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void prevet(int *vet);
void mostravet(int *vet);
void imparpar(int vet[]);
int maiornumero(int vet[]);
int media(int vet[]);

int main(){
    int vet[5];
    int maior,mediaa;

    prevet(vet);

    mostravet(vet);    
    
    imparpar(vet);
    
    maior = maiornumero(vet);

    printf("\no maior numero eh %i\n",maior);

    mediaa = media(vet);

    printf("a media eh %i\n",mediaa);

    getch();
}


void prevet(int vet[]){
    int i;


    printf("Preencha o vetor: \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%i",&vet[i]);
    }
    
}

void mostravet(int vet[]){

    int i;

    
    for ( i = 0; i < 5; i++)
    {
        printf("%i",vet[i]);
    }
     printf("\n");
}


void imparpar(int vet[]){
    
    int i, par, impar;

    par = 0;
    impar = 0;


    for ( i = 0; i < 5; i++)
    {
        if (vet[i] % 2 == 0)
        {
            par++;
            
        }else{
            impar++;
        }
    }

    printf("o vetor tem %i pares \n", par);
    printf("o vetor tem %i impares\n", impar);

}



int maiornumero(int vet[]){
    int i,maior;
    maior = vet[0];

    for ( i = 0; i < 5; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
    }

    return(maior);
    
}

int media(int vet[]){

    int i,soma,mediaa;

    soma = 0;

    for ( i = 0; i < 5; i++)
    {
        soma = soma + vet[i];

    }

    mediaa = soma / 5;
    
    return(mediaa);
    
}
