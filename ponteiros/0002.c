
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x, *p;
    x = 100;
    p = &x;
    printf("Valor de p: %i. \n", *p);

    return(0);
}