#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char array[5];
    char array2[5];
    char temp, temp1;
    
    puts("Digite uma string com 4 caracteres");
    fgets(array,sizeof(array), stdin);

    printf("\no primeiro array eh: %s", array);
    strcpy(array2, array);

    temp = array[0];
    temp1 = array[3];

    array2[0] = temp1;
    array2[3] = temp;
    printf("\no segundo array eh: %s", array2);

    getch();
}