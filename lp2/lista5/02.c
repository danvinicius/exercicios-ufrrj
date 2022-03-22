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