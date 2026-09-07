#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>



int main(){

    float vet [10];
    int i;

    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
         vet[i] = rand() % 10;

    }

    printf("endereco dos valores do vetor: \n");

    for (i = 0; i < 10; i++)
    {
         printf("%p ",&vet[i]);

    }
    getch();

}