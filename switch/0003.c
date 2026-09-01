#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(){

    int n1;


   
    printf("escolha uma opçao no menu: \n 1 - Cadastro de clientes \n 2 - Cadastro de produtos \n 3 - Cadastro de fornecedores \n 4 - Cadastro de funcionarios \n 5 - Cadastro de vendas \n 6 - Cadastro de compras \n 7 - Cadastro de estoque \n");
    scanf("%i", &n1);

    switch (n1)
    {
    case 1:
    {
        
        printf("Cadastro de clientes");
         break;
    }
       case 2:
    {
         printf("Cadastro de produtos");
         break;
    }
       case 3:
    {
       
        printf("Cadastro de fornecedores");
         break;
    }
       case 4:
    {
        
        printf("Cadastro de funcionarios");
         break;
    }
    case 5:
    {
        
        printf("Cadastro de vendas");
         break;
    }
    case 6:
    {
       
        printf("Cadastro de compras");
         break;
    }
    case 7:
    {
        
        printf("Cadastro de estoque");
         break;
    }
    
        
    
    default:
        printf("Nao foi possivel indetificar uma opçao com esse numero");
        break;
    }

    getch();
}