#include <stdio.h>

int main()
{

    int a[3][5];
    int n;
    int SOMA_LINHA[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite o elemento %dx%d da matriz A:\n", i + 1, j + 1);
            scanf("%d", &n);
            a[i][j] = n;
        }
    }

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    printf("\nLista A[] = \n");
    for (int i = 0; i < 3; i++)
    {
        printf("[");
        for (int j = 0; j < 5; j++)
        {
            printf("%d, ", a[i][j]);
        }
        printf("]\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            SOMA_LINHA[i] += a[i][j];
        }
    }

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    printf("\nVetor SOMA_LINHA[] = \n");
    printf("[");
    for (int i = 0; i < 3; i++)
    {
        printf("%d, ", SOMA_LINHA[i]);
    }
    printf("]\n");
}