#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i;
    char array[6];
    
    
    puts("Digite uma palavra de 5 letras: ");
    fgets(array, sizeof(array), stdin);
  
    for (i = 5; i >= 0; i--)
    {
       
        putchar(array[i]);

    }

    
    getch();
}
