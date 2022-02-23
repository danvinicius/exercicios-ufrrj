#include <stdio.h>

int main()
{

    int vetor1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int vetor2[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int novoVetor[20];
    int k = 0;
    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
            novoVetor[i] = vetor1[i];
        else
        {
            novoVetor[i] = vetor2[k];
            k++;
        }
    }
    for (int i = 0; i < 20; i++)
        printf("%d - ", novoVetor[i]);
}