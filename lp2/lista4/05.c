#include <stdio.h>

int main()
{

    int m[4][5] = {
        {2, 1, 8, 5, 6},
        {7, 6, 4, 1, 3},
        {2, 3, 0, 5, 9},
        {9, 8, 0, 7, 4}};
    int dobro[4][5];
    int soma[4][5];

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    printf("\nLista M[] = \n");
    for (int i = 0; i < 4; i++)
    {
        printf("[");
        for (int j = 0; j < 5; j++)
        {
            printf("%d, ", m[i][j]);
        }
        printf("]\n");
    }
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    printf("\nLista DOBRO[] = \n");
    for (int i = 0; i < 4; i++)
    {
        printf("[");

        for (int j = 0; j < 5; j++)
        {
            dobro[i][j] = m[i][j] * 2;
            printf("%d, ", dobro[i][j]);
        }
        printf("]\n");
    }

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    printf("\nLista SOMA[] = \n");
    for (int i = 0; i < 4; i++)
    {
        printf("[");
        for (int j = 0; j < 5; j++)
        {
            soma[i][j] = m[i][j] + dobro[i][j];
            printf("%d, ", soma[i][j]);
        }
        printf("]\n");
    }
}