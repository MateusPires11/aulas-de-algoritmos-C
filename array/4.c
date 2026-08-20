#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[40];
    char string2[40];

    puts("Digite um palavra com ate 40 letras: ");
    fgets(string1, sizeof(string1), stdin);
    printf("\no primeiro array eh: %s", string1);
    strcpy(string2, string1);

    printf("\n o segundo array copiado eh: %s", string2);

    getch();
}