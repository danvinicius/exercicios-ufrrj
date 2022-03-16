// Solicitar um nome e mostrar para o usuário o nome digitado.
#include <stdio.h>

int main()
{
    char nome[20];
    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    printf("Olá, %s!", nome);
    return 0;
}