
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;

    printf("digite um numero: ");
    scanf("%i", &n1);
    printf("digite um numero: ");
    scanf("%i", &n2);

    if ((&n1) > (&n2))
    {
        printf("o endereco do n1 %p eh maior q o n2 %p", (void*)&n1, (void*)&n2);
    }else{
        printf("o endereco do n2 %p eh maior q o n1 %p", (void*)&n2, (void*)&n1);
    }
    
 

}