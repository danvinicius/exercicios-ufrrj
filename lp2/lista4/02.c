/*Leia dois vetores, um preenchido com valores sequenciais de 0 a 9 e
outro com valores sequenciais de 10 a 19, e intercale-os num terceiro
vetor formando uma nova variável. Mostre o vetor obtido, imprimindo
seus elementos na ordem inversa.*/
#include <stdio.h>
int main()
{
    int vet1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int vet2[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int vetorFinal[20];
    int j = 0;
    for (int i = 0; i < 10; i++)
    {
        vetorFinal[j] = vet1[i];
        j++;
        vetorFinal[j] = vet2[i];
        j++;
    }

    for (int i = 0; i < 20; i++)
        printf("%d, ", vetorFinal[i]);
}
