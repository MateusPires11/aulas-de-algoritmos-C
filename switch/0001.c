#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(){

    int n1, n2,r;

    char op;


    printf("escolha um numero: ");
    scanf("%i", &n1);
    printf("escolha outro numero: ");
    scanf("%i", &n2);

    printf("escolha um operador");
    scanf("%c", &op);

    switch (op)
    {
    case '+':
    {
        r = n1 + n2;
        printf("resultado = %i", r);
         break;
    }
       case '-':
    {
        r = n1 - n2;
        printf("resultado = %i", r);
         break;
    }
       case '*':
    {
        r = n1 * n2;
        printf("resultado = %i", r);
         break;
    }
       case '/':
    {
        r = n1 / n2;
        printf("resultado = %i", r);
         break;
    }
    
        
    
    default:
        printf("Nao foi possivel indetificar um operador");
        break;
    }


}