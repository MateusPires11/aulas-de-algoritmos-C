#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct notas{
    char nome[80];
    float nota1;
    float nota2;
    float media;
}notas;




int main(){
   
    printf("Digite o nome do aluno: ");
    gets(notas.nome);
    printf("\n");
    
    printf("\nDigite a primeira nota do aluno: ");
    scanf("%f",&notas.nota1);

    printf("\nDigite a segunda nota do aluno: "); 
    scanf("%f",&notas.nota2);

    notas.media = (notas.nota1 + notas.nota2) / 2;

    printf("RESULTADO: \n");
    printf("Nome do aluno/a: %s",notas.nome);
    printf("\nPrimeira nota: %3.f", notas.nota1);
    printf("\nSegunda nota: %3.f", notas.nota2);
    printf("\nMedia: %3.f", notas.media);

    getch();
}


