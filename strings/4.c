#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tam;
    
    printf("Digite o tamanho do array: ");
    scanf("%i",&tam);
    getchar();
    char array[tam], array1[tam];

    puts("Digite uma palavra de acordo com o tamnho escolhido");
    
    fgets(array,sizeof(array),stdin);

    printf("o array eh %s",array);
    strcpy(array1, array);

    printf("\no array copiado eh %s",array1);



    getch();
}