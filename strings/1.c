#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    char array1[20];
    char array2[20];

    puts("\nDigite um nome: ");
    fgets(array1, sizeof(array1),stdin);

    puts("\nDigite um nome: ");
    fgets(array2, sizeof(array2),stdin);

    printf("a segunda letra do primeiro nome: %c", array1[1]);
    printf("\na segunda letra do segundo nome: %c", array2[1]);
    getche();
}