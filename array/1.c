#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main(){

    char array1[20];
    char array2[20];
    puts("\nDigite um nome: ");
    scanf("%19s", array1);
    puts("\nDigite um nome: ");
    scanf("%19s", array2);
    printf("a segunda letra do primeiro nome: %c", array1[1]);
    printf("\na segunda letra do segundo nome: %c", array2[1]);
    getche();
}