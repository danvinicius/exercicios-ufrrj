/*
Faça um programa em C que leia um vetor de 30 inteiros e implemente as
funções a seguir, utilizando, OBRIGATORIAMENTE, ponteiros e passagem de
parâmetros por referência:

a. void zeraPares (int * vet): recebe um vetor e troca todos os
números pares contidos nele pelo zero.
b. void dobra (int * vet): recebe um vetor e multiplica todos os seus
elementos por dois.
c. void soma (int * vet1, int * vet2): recebe dois vetores de inteiros
e soma cada para de elementos de mesmo índice, colocando o
resultado no primeiro vetor.
*/

#include <stdio.h>
#include <stdlib.h>

void zeroPares(int *vet)
{
    printf("Substituindo todos os pares por 0: \n");
    for (int i = 0; i < 30; i++)
    {
        if (*(vet + i) % 2 == 0)
        {
            *(vet + i) = 0;
        }
    }
    for (int i = 0; i < 30; i++)
    {
        printf("%d, ", *(vet + i));
    }
    printf("\n\n\n");
}

void dobra(int *vet)
{
    printf("Dobrando todos os números: \n");
    for (int i = 0; i < 30; i++)
    {
        *(vet + i) *= 2;
    }
    for (int i = 0; i < 30; i++)
    {
        printf("%d, ", *(vet + i));
    }
    printf("\n\n\n");
}

void soma(int *vet1, int *vet2)
{
    printf("Somando o vetor 2 (dobrado) com o vetor 3: \n");
    for (int i = 0; i < 30; i++)
    {
        *(vet1 + i) += *(vet2 + i);
    }
    for (int i = 0; i < 30; i++)
    {
        printf("%d, ", *(vet1 + i));
    }
    printf("\n\n\n");
}

int main()
{
    int vetor1[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    zeroPares(vetor1);
    int vetor2[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    dobra(vetor2);
    int vetor3[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    soma(vetor2, vetor3);
    return 0;
}