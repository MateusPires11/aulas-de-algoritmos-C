#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main(){

    int x;
    int y=0;          // y=0, x e p ainda indefinidos
    int *p;
    
    p = &y;           // p aponta pra y (valor 0)

    x = *p;           // x = 0 (pega o valor apontado por p, que é y)

    x = 4;            // x = 4
    (*p)++;           // incrementa y (via p) → y = 1

    --x;              // decrementa x → x = 3
    
    (*p) += x;        // y += x → y = 1 + 3 = 4

}






