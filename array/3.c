#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char temp, temp1;
    char string1[5];
    char string2[5];

    puts("Digite um palavra com ate 4 letras: ");
    fgets(string1, sizeof(string1), stdin);
    printf("\no primeiro array eh: %s", string1);
    strcpy(string2, string1);

    temp = string1[0];
    temp1 = string1[3];

    string2[3] = temp;
    string2[0] =  temp1;

    printf("\n o segundo array modificado eh: %s", string2);

    getch();
}